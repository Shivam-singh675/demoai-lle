/*-----------------------------------------------------------------------------
    Name: Flow_1
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 31)
    Flow details:
    Build details: 08/07/2026 04:32:22
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
    ns_start_transaction("Authentication");
    ns_web_url("Authentication",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/authentication",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Relief_Fund_Account_Creation_Flow_1_Authentication.json",
        BODY_END
    );
    ns_end_transaction("Authentication", NS_AUTO_STATUS);
    ns_page_think_time(0);
    // post-response code for page : Authentication
    ns_replace("authKey", "\\u003d", "=");

    ns_start_transaction("Create_Relief_Fund_Savings_Account");
    ns_web_url("Create_Relief_Fund_Savings_Account",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:default",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Relief_Fund_Account_Creation_Flow_1_Create_Relief_Fund_Savings_Account.json",
        BODY_END
    );
    ns_end_transaction("Create_Relief_Fund_Savings_Account", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Approve_Relief_Fund_Account");
    ns_web_url("Approve_Relief_Fund_Account",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/{savingsIdParam}?command=approve",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:default",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Relief_Fund_Account_Creation_Flow_1_Approve_Relief_Fund_Account.json",
        BODY_END
    );
    ns_end_transaction("Approve_Relief_Fund_Account", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Activate_Relief_Fund_Account");
    ns_web_url("Activate_Relief_Fund_Account",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/{savingsIdParam}?command=activate",
        "METHOD=POST",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Accept:application/json",
        "HEADER=Fineract-Platform-TenantId:default",
        "HEADER=Content-Type:application/json",
        BODY_BEGIN,
            "$CAVINCLUDE$=Relief_Fund_Account_Creation_Flow_1_Activate_Relief_Fund_Account.json",
        BODY_END
    );
    ns_end_transaction("Activate_Relief_Fund_Account", NS_AUTO_STATUS);
    ns_page_think_time(0);
}
