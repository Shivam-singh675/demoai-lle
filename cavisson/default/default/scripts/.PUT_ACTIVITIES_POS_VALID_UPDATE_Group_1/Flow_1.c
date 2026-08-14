/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 32)
    Flow details:
    Build details: 08/11/2026 11:06:08
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
        "URL={BASE_URL}/api/v1/Activities",
        "METHOD=POST",
        "HEADER=Accept:application/json; v=1.0",
        "HEADER=Content-Type:application/json; v=1.0",
        BODY_BEGIN,
            "{"title":"{dynamic_post_title}","dueDate":"{dynamic_post_dueDate}","completed":"{dynamic_post_completed}"}",
        BODY_END
    );
    ns_end_transaction("index", NS_AUTO_STATUS);
    ns_page_think_time(0.0);
    ns_start_transaction("index1");
    ns_web_url("index1",
        "URL={BASE_URL}/api/v1/Activities/{dynamic_id}",
        "METHOD=PUT",
        "HEADER=Accept:application/json; v=1.0",
        "HEADER=Content-Type:application/json; v=1.0",
        BODY_BEGIN,
            "{"id":"{dynamic_id}","title":"{dynamic_put_title}","dueDate":"{dynamic_put_dueDate}","completed":"{dynamic_put_completed}"}",
        BODY_END
    );
    ns_end_transaction("index1", NS_AUTO_STATUS);
    ns_page_think_time(0.0);
}
