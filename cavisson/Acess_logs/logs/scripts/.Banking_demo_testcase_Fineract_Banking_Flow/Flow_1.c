/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 27)
    Flow details:
    Build details: 07/30/2026 12:15:09
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
    ns_start_transaction("Login");
    ns_web_url("Login",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/authentication",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Fineract-Platform-TenantId:{tenant}",
        BODY_BEGIN,
            "$CAVINCLUDE$=Fineract_Banking_Flow_Flow_1_Login.json",
        BODY_END
    );
    ns_end_transaction("Login", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Check_Balance_Before");
    ns_web_url("Check_Balance_Before",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/1",
        "METHOD=GET",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authToken}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:{tenant}"
    );
    ns_end_transaction("Check_Balance_Before", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Deposit_Money");
    ns_web_url("Deposit_Money",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/1/transactions?command=deposit",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authToken}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:{tenant}",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Fineract_Banking_Flow_Flow_1_Deposit_Money.json",
        BODY_END
    );
    ns_end_transaction("Deposit_Money", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Check_Balance_After_Deposit");
    ns_web_url("Check_Balance_After_Deposit",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/1",
        "METHOD=GET",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authToken}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:{tenant}"
    );
    ns_end_transaction("Check_Balance_After_Deposit", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Transfer_funds");
    ns_web_url("Transfer_funds",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/accounttransfers",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authToken}",
        "HEADER=Fineract-Platform-TenantId:{tenant}",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Fineract_Banking_Flow_Flow_1_Transfer_funds.json",
        BODY_END
    );
    ns_end_transaction("Transfer_funds", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Check_Balance_After_Transfer");
    ns_web_url("Check_Balance_After_Transfer",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/1",
        "METHOD=GET",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authToken}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:{tenant}"
    );
    ns_end_transaction("Check_Balance_After_Transfer", NS_AUTO_STATUS);
    ns_page_think_time(0);
}
