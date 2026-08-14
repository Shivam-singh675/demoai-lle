/*-----------------------------------------------------------------------------
    Name: application_wadl
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 32)
    Flow details:
    Build details: 08/12/2026 01:57:03
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "ns_string.h"

void application_wadl()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
    ns_start_transaction("Authenticate___Login");
    ns_web_url("Authenticate___Login",
        "URL={baseUrl}/api/v1/authentication",
        "METHOD=POST",
        "HEADER=Fineract-Platform-TenantId:default",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_application_wadl_Authenticate___Login.json",
        BODY_END
    );
    ns_end_transaction("Authenticate___Login", NS_AUTO_STATUS);
    ns_page_think_time(0);
    // post-response code for page : Authenticate___Login
    //ns_replace("base64EncodedAuthenticationKeyParam", "\\u003d", "=");
ns_replace("authKey", "\\u003d", "=");

    ns_start_transaction("Create_Customer_1");
    ns_web_url("Create_Customer_1",
        "URL={baseUrl}/api/v1/clients",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Fineract-Platform-TenantId:default",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_application_wadl_Create_Customer_1.json",
        BODY_END
    );
    ns_end_transaction("Create_Customer_1", NS_AUTO_STATUS);
    ns_page_think_time(0);
}
