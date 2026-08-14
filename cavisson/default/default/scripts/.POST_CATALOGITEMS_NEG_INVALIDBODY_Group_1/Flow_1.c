/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 27)
    Flow details:
    Build details: 07/31/2026 08:05:10
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
        "URL={BASE_URL}/api/catalog-items",
        "METHOD=POST",
        "HEADER=Authorization:{dynamic_authorization}",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "{"catalogBrandId":null,"catalogTypeId":null,"description":null,"name":null,"pictureUri":null,"pictureBase64":null,"pictureName":null,"price":null}",
        BODY_END
    );
    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(0.0);
}
