/*-----------------------------------------------------------------------------
    Name: CreateCustomer
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.16.0 (build# 37)
    Flow details:
    Build details: 08/21/2026 02:11:59
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "ns_string.h"

void CreateCustomer()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
    ns_start_transaction("CreateCustomer");
    ns_web_url("CreateCustomer",
        "URL={baseUrl}/api/v1/clients",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Fineract-Platform-TenantId:default",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_CreateCustomer_CreateCustomer.text",
        BODY_END
    );
    ns_end_transaction("CreateCustomer", NS_AUTO_STATUS);
    ns_page_think_time(0);
}
