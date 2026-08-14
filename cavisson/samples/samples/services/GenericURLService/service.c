#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "hpd_log.h"
#include "hpd_string_api.h"
#include <errno.h>
#include <unistd.h>
#include <sys/time.h>


/*-------------------------------------------
  Name: GenericURLService_on_request_callback
  Purpose: This method is called on receiving the service request and after all search and conditional parameters are processed and before applying service delay time.Now, this is supporting random time which is given in query like "SvcTime=100-200".For random time we can generate random time between this min and max time. If we are giving service time like "SvcTime=-100" then random time will calculate between 0 to 100 and if we are give service time like "SvcTime=100-" or  "SvcTime=100"then service time calculate with the number which we are giving after the SvcTime keyword(without -).  
  Input:   None
  Return:  The function controls service time. Return values can be:
           0 - No service delay time. Override service delay time configure if any
          -1 - Use service delay time as configured
          >0 - Use service delay time in milli-seconds returned by this method
 ------------------------------------------------*/
/*
This uses following query paramters
SvcTime - Service time in milli-seconds
Status - HTTP Status code e.g. 404
Location - If status is 301 or 302, then Location is used and set in the repsonse 
e.g http://192.168.1.40/url_service/url_test.xml?SvcTime=150&Status=301&Location=/tours/index.html
RespSize - Size of response body
  Or
RespFile - File name which is send in the resp bodyS
  Or
RespSameAsReq - Y/N. If Y, then whatever comes in Req body, it is send back in response
CloseConnection - Y/N. If Y, then hpd will close the connection.
Header  (Upto 50 headers)
  Hdr??=<headername: hdr value>
e.g http://192.168.1.40/url_service/url_test.xml?SvcTime=150&Status=404&RespSize=128&Hdr1=MyHdr: MyHdrValue
e.g http://192.168.1.40/url_service/url_test.xml?SvcTime=150&Status=404&RespFile=/tmp/a.txt
e.g. ws://10.10.60.84:9002/url_service/url_test.xml?CloseConnection=Y"
*/
/***********************************for headers***************************************************/
static int check_and_set_http_hdr_ex(char *query_param_name, char *hdr_name, int decode_option)
{
char query_val[4096], http_hdr[4096];
int ret;
  ret = ns_get_url_query_param_val(query_param_name, query_val, decode_option);
  if(ret >= 0) // query parameter found, So send in the response
  {
    sprintf(http_hdr, "%s%s", hdr_name, query_val);
    ns_set_http_hdr(http_hdr);
  }
  return 0;
}
static int check_and_set_http_hdr(char *query_param_name, int decode_option)
{
char query_val[4096], http_hdr[4096]; 
int ret;
    ret = ns_get_url_query_param_val(query_param_name, query_val, decode_option);
    if(ret >= 0) // query parameter found, So send in the response
    {
      sprintf(http_hdr, "%s", query_val);
      ns_set_http_hdr(http_hdr);
    }
    return 0;
}
static void set_header()
{
char hdr_var[4096];
int i;
 
  for(i=0; i < 50; i++)
  {
    sprintf(hdr_var, "Hdr%d", i);
    check_and_set_http_hdr(hdr_var, HPD_CODE_DECODE);
  }
}
/**************************************************************************************/
// Return status code filled
static int check_and_set_status_code()
{
char query_val[4096], hdr_val[4096], http_hdr[4096];
int ret;
int status = 200;
  ret = ns_get_url_query_param_val("Status", query_val, HPD_CODE_NONE);
  if(ret >= 0) // Status found in query parameter
  {
    status = atoi(query_val);
    ns_set_http_status_code(status);
  }
  // In case of redirection, check if location is passed, Then set location
  if((status == 301) || (status == 302))
  {
    check_and_set_http_hdr_ex("Location", "Location: ", HPD_CODE_NONE);
  }
  return status;
}       
/*If CloseConnection string is found inside query parameter then hpd will close the connection before sending response*/
static int check_and_set_close_connection()
{
char query_val[4096], hdr_val[4096], http_hdr[4096];
int ret;
  ret = ns_get_url_query_param_val("CloseConnection", query_val, HPD_CODE_NONE);
  if(ret >= 0) // CloseConnection found in query parameter
  {
    if(!strcmp(query_val, "Y"))
    {
      hpd_reset_connection();
      return 1;
    }
  }
  return 0;
}       
// Return status code filled
static int get_svc_time()
{
char query_val[4096], hdr_val[4096], http_hdr[4096];
int ret;
char *svc_seperator;
int svc_min = 0;
int svc_max = 0;
int svc_time = -1; // As per service.conf SVC_TIME keyword which we will not set, so 0
  ret = ns_get_url_query_param_val("SvcTime", query_val, HPD_CODE_NONE);
  if(ret >= 0) // SvcTime found in query parameter
  {
  if((svc_seperator = strchr(query_val, '-'))){
      if (*(svc_seperator + 1) != '\0') { // Case of max given (e.g. 100-500 or -500)
              svc_max = atoi(svc_seperator + 1);
              if(svc_seperator != query_val) { // Case of both min and max given (e.g. 100-500)
                      svc_min = atoi(query_val);
              }
              HPDDL1_API(NULL, "SvcTimeRange - svc_min = %d and svc_max = %d", svc_min, svc_max);
              return ns_get_random_num_int(svc_min, svc_max);
      }
  }
  // when only one value or min- is given
  svc_time = atoi(query_val);
  }
  return svc_time;
}
static void fill_cdn_header(int svc_time)
{
  int ret;
  int factor;
  int service_time;
  char query_val[1024];
  int rand_value;
  int edge_duration;
  int origin_duration;
  char cdn_value[1024];
  char st_hdr_value[512];
  int hit_or_miss = 1; // 1 - hit, 2 - miss.

  ret = ns_get_url_query_param_val("cdn_qparam", cdn_value, HPD_CODE_NONE); 
  if(ret >= 0)
  {
    if(svc_time >= 0)
      service_time = svc_time;
    else
      service_time = ns_get_random_num_int(100,1000);

    // Checking for cdn mode  
    if (!strcmp(cdn_value, "0")) 
    {
      // Auto mode  
      rand_value = ns_get_random_num_int(1,100);
      if (rand_value < 30) hit_or_miss = 2; // Miss. 
    } 
    else if (!strcmp(cdn_value, "1")) 
    {
      hit_or_miss = 1; 
    } 
    else if (!strcmp(cdn_value, "2")) 
    {
      hit_or_miss = 2;
    } 
    else 
    {
      // Not matched. 
      return; 
    }
    int factor = ns_get_random_num_int(1, 100);
    //Check for edge value
    ret = ns_get_url_query_param_val("edge", query_val, HPD_CODE_NONE); 
    if(ret >= 0)
      edge_duration = atoi(query_val);
    else
       edge_duration = (int)((factor / 100.0) * (double) service_time);    

    //Check for origin value
    ret = ns_get_url_query_param_val("origin", query_val, HPD_CODE_NONE); 
    if(ret >= 0)
      origin_duration = atoi(query_val);
    else
      origin_duration = (int)(((100 - factor) / 100.0) * (double) service_time);
   
    if (hit_or_miss == 2) 
    {  // Miss
      sprintf(st_hdr_value, "Server-Timing: cdn-cache; desc=MISS, edge; dur=%d, origin; dur=%d",edge_duration,origin_duration); 
    } 
    else 
    { //Hit
      if(service_time) 
        sprintf(st_hdr_value, "Server-Timing: cdn-cache; desc=HIT, edge; dur=%d", service_time);
      else
	sprintf(st_hdr_value, "Server-Timing: cdn-cache; desc=HIT, edge; dur=%d", edge_duration); 
    }
    ns_set_http_hdr(st_hdr_value);
  }
}
// return size of body if known
static int fill_body()
{
char query_val[4096];
int ret;
int resp_size = 0;
  char *resp_buf;
  // Same as request
  ret = ns_get_url_query_param_val("RespSameAsReq", query_val, HPD_CODE_NONE);
  if(ret >= 0) 
  {
    if(!strcmp(query_val, "Y"))
    {
      resp_buf = ns_get_request_buf(&resp_size);
      ns_save_binary_val(resp_buf, "Body", resp_size);
      return resp_size;
    }
  }
  // Get value of query parameter - RespFile
  ret = ns_get_url_query_param_val("RespFile", query_val, HPD_CODE_NONE);
  if(ret >= 0) // RespFile found in query parameter
  {
    ns_save_value_from_file(query_val, "Body");
    return 0; // Size if not known so return 0 as it is not used
  }
  // Response size given. Generate data of that size
  ret = ns_get_url_query_param_val("RespSize", query_val, HPD_CODE_NONE);
  if(ret >= 0) // RespSize found in query parameter
  {
    resp_size = atoi(query_val);
  }
  //This is the default case so this should be at last.  
  if(resp_size == 0)
  {
    ns_save_string("", "Body"); // make Body variable empty
    return 0;
  }
  int malloc_done = 0;
  resp_buf = malloc(resp_size + 1);
  if(resp_buf == NULL)
  {
    resp_buf = "Error in malloc";
    resp_size = strlen(resp_buf);
  }
  else
  {
    memset(resp_buf, 'A', resp_size);
    malloc_done = 1;
  }
  // Use ns_save_binary_val so that we can fill binary value in future
  // E.g. to send compressed data
  ns_save_binary_val(resp_buf, "Body", resp_size);
  if(malloc_done)
    free(resp_buf);
  return resp_size;
}
// To set keep alive time for the url
void set_keep_alive_timeout()
{
  int ret;
  int keep_alive_time;
  char query_val[1024];
  ret = ns_get_url_query_param_val("KeepAliveTime", query_val, HPD_CODE_NONE);
  if(ret >= 0) // keep alive rime found in query 
  {
    keep_alive_time = atoi(query_val);
    ns_ka_time(keep_alive_time);
    HPDDL1_API(NULL, "keep_alive_time = %d", keep_alive_time);
  }
}
//to redirect url
//Sample request http://hostname.com/url?BODY=thisIsBody&http_status=302&Location=http://www.cavisson.com/index.php
 
static int prepare_redirect_reply()
{
  int http_status = 100,ret = 0;
  char query_string[1024];
  char http_hdr[1200];
  //Set redirect status and Location header if any
  ret = ns_get_url_query_param_val("http_status", query_string, HPD_CODE_NONE);
  if(ret >= 0)
  {
    http_status = atoi(query_string);
    if((http_status == 301) || (http_status == 302))
    { //set http status code to 301 or 302
      ns_set_http_status_code(http_status);
      ret = ns_get_url_query_param_val("Location", query_string, HPD_CODE_NONE);
      if(ret >= 0){
        sprintf(http_hdr, "%s%s", "Location: ", query_string);
        ns_set_http_hdr(http_hdr);  //set Location header 
      }
    }
  }
  //make body
  ret = ns_get_url_query_param_val("BODY", query_string, HPD_CODE_NONE);
  if(ret >= 0)
  {
    ns_save_string(query_string, "Body");
  }
}

int GenericURLService_on_request_callback() 
{
  int svc_time = get_svc_time();
  if(check_and_set_close_connection())
    return svc_time; // Since connection is closed, we should return
  int status = check_and_set_status_code();
  fill_body();
  set_header(); 
  fill_cdn_header(svc_time);
  set_keep_alive_timeout();
  
  prepare_redirect_reply(); 
  return svc_time;
}
