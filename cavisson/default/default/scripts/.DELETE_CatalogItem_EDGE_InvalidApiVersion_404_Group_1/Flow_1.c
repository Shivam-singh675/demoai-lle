/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 31)
    Flow details:
    Build details: 08/06/2026 08:12:12
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
        "URL={BASE_URL}/api/catalog/items?api-version={dynamic_api_version}",
        "METHOD=POST",
        BODY_BEGIN,
            "{"name":"{dynamic_post_name}","description":"{dynamic_post_description}","price":"{dynamic_post_price}","pictureFileName":"{dynamic_post_pictureFileName}","pictureUri":"{dynamic_post_pictureUri}","catalogTypeId":"{dynamic_post_catalogTypeId}","catalogBrandId":"{dynamic_post_catalogBrandId}"}",
        BODY_END
    );
    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(0.0);
    ns_start_transaction("index1");
    ns_web_url("index1",
        "URL={BASE_URL}/api/catalog/items/{dynamic_id}?api-version={dynamic_delete_api_version}",
        "METHOD=DELETE",
    );
    ns_end_transaction("index1", NS_AUTO_STATUS);
    ns_page_think_time(0.0);
}
