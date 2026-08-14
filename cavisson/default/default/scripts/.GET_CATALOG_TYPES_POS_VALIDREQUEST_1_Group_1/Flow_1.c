/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 28)
    Flow details:
    Build details: 08/03/2026 09:41:43
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "ns_string.h"

void Flow_1()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
    ns_start_transaction("index");
    ns_web_url("index",
        "URL={BASE_URL}/api/catalog-types",
        "METHOD=GET",
        "HEADER=Authorization:{dynamic_auth_token}"
    );
    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(0.0);
}
