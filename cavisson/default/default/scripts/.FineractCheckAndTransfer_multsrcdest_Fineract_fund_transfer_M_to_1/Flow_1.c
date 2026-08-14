/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 33)
    Flow details:
    Build details: 08/13/2026 12:15:04
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
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Fineract_fund_transfer_M_to_1_Flow_1_Login.json",
        BODY_END
    );
    ns_end_transaction("Login", NS_AUTO_STATUS);
    ns_page_think_time(0);
    // post-response code for page : Login
    ns_replace("authkey", "\\u003d", "=");
    ns_start_transaction("Deposit");
    ns_web_url("Deposit",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/{savingsIdParam}/transactions?command=deposit",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authkey}",
        "HEADER=Content-Type:application/json",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Fineract_fund_transfer_M_to_1_Flow_1_Deposit.json",
        BODY_END
    );
    ns_end_transaction("Deposit", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Check_Balance_Before");
    ns_web_url("Check_Balance_Before",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/{savingsIdParam}",
        "METHOD=GET",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authkey}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:default"
    );
    ns_end_transaction("Check_Balance_Before", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Fund_transfer_mtom");
    ns_web_url("Fund_transfer_mtom",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/accounttransfers",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authkey}",
        "HEADER=Fineract-Platform-TenantId:default",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Fineract_fund_transfer_M_to_1_Flow_1_Fund_transfer_mtom.text",
        BODY_END
    );
    ns_end_transaction("Fund_transfer_mtom", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Fund_transfer_mto1");
    ns_web_url("Fund_transfer_mto1",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/accounttransfers",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authkey}",
        "HEADER=Fineract-Platform-TenantId:default",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Fineract_fund_transfer_M_to_1_Flow_1_Fund_transfer_mto1.text",
        BODY_END
    );
    ns_end_transaction("Fund_transfer_mto1", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Fund_transfer_mtom_again");
    ns_web_url("Fund_transfer_mtom_again",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/accounttransfers",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authkey}",
        "HEADER=Fineract-Platform-TenantId:default",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Fineract_fund_transfer_M_to_1_Flow_1_Fund_transfer_mtom_again.text",
        BODY_END
    );
    ns_end_transaction("Fund_transfer_mtom_again", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Check_Balance_After_Transfer");
    ns_web_url("Check_Balance_After_Transfer",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/{savingsIdParam}",
        "METHOD=GET",
        "HEADER=Content-Type:text/plain",
        "HEADER=Authorization:Basic {authkey}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:default"
    );
    ns_end_transaction("Check_Balance_After_Transfer", NS_AUTO_STATUS);
    ns_page_think_time(0);
}
