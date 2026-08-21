/*-----------------------------------------------------------------------------
    Name: DepositMoney
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

void DepositMoney()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
    ns_start_transaction("DepositMoney");
    ns_web_url("DepositMoney",
        "URL={baseUrl}/api/v1/savingsaccounts/{savingsIdParam}/transactions?command=deposit",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Content-Type:application/json",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_DepositMoney_DepositMoney.text",
        BODY_END
    );
    ns_end_transaction("DepositMoney", NS_AUTO_STATUS);
    ns_page_think_time(0);
}
