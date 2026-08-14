/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 31)
    Flow details:
    Build details: 08/06/2026 08:12:00
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
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "{"name":"{dynamic_post_name}","description":"{dynamic_post_description}","price":"{dynamic_post_price}","pictureFileName":"{dynamic_post_pictureFileName}","catalogTypeId":"{dynamic_post_catalogTypeId}","catalogBrandId":"{dynamic_post_catalogBrandId}","availableStock":"{dynamic_post_availableStock}","restockThreshold":"{dynamic_post_restockThreshold}","maxStockThreshold":"{dynamic_post_maxStockThreshold}","onReorder":"{dynamic_post_onReorder}"}",
        BODY_END
    );
    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(0.0);
    ns_start_transaction("index1");
    ns_web_url("index1",
        "URL={BASE_URL}/api/catalog/items",
        "METHOD=PUT",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "{"id":"{dynamic_id}","name":"{dynamic_put_name}","description":"{dynamic_put_description}","price":"{dynamic_put_price}","pictureFileName":"{dynamic_put_pictureFileName}","catalogTypeId":"{dynamic_put_catalogTypeId}","catalogBrandId":"{dynamic_put_catalogBrandId}","availableStock":"{dynamic_put_availableStock}","restockThreshold":"{dynamic_put_restockThreshold}","maxStockThreshold":"{dynamic_put_maxStockThreshold}","onReorder":"{dynamic_put_onReorder}"}",
        BODY_END
    );
    ns_end_transaction("index1", NS_AUTO_STATUS);
    ns_page_think_time(0.0);
}
