/*-----------------------------------------------------------------------------
    Name: CheckBalanceafter
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

void CheckBalanceafter()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
    ns_start_transaction("CheckBalance_after_transaction");
    ns_web_url("CheckBalance_after_transaction",
        "URL={baseUrl}/api/v1/savingsaccounts/{savingsIdParam}",
        "METHOD=GET",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:default"
    );
    ns_end_transaction("CheckBalance_after_transaction", NS_AUTO_STATUS);
    ns_page_think_time(0);
}
