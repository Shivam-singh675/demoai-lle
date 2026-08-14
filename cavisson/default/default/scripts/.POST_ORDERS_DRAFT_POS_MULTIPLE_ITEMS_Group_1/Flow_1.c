/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 32)
    Flow details:
    Build details: 08/13/2026 05:05:47
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
        "URL={BASE_URL}/api/orders/draft",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "{"buyerId":"{dynamic_post_buyerId}","items":[{"id":"{dynamic_post_item1_id}","productId":"{dynamic_post_item1_productId}","productName":"{dynamic_post_item1_productName}","unitPrice":"{dynamic_post_item1_unitPrice}","oldUnitPrice":"{dynamic_post_item1_oldUnitPrice}","quantity":"{dynamic_post_item1_quantity}","pictureUrl":"{dynamic_post_item1_pictureUrl}"},{"id":"{dynamic_post_item2_id}","productId":"{dynamic_post_item2_productId}","productName":"{dynamic_post_item2_productName}","unitPrice":"{dynamic_post_item2_unitPrice}","oldUnitPrice":"{dynamic_post_item2_oldUnitPrice}","quantity":"{dynamic_post_item2_quantity}","pictureUrl":"{dynamic_post_item2_pictureUrl}"}]}",
        BODY_END
    );
    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(0.0);
}
