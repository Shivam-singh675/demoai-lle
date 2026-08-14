/*-----------------------------------------------------------------------------
    Name: Setup_Savings_Accounts
    Created By: This is an auto generated script. You can, however, make a copy of this script using advanced script manager and enhance it
    Date of creation: 4.15.2 (build# 32)
    Flow details:
    Build details: 08/13/2026 05:41:35
    Modification History:
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "ns_string.h"

void Setup_Savings_Accounts()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
    ns_start_transaction("Create_Savings___Customer_1");
    ns_web_url("Create_Savings___Customer_1",
        "URL={baseUrl}/api/v1/savingsaccounts",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_Setup_Savings_Accounts_Create_Savings___Customer_1.json",
        BODY_END
    );
    ns_end_transaction("Create_Savings___Customer_1", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Approve_Savings___Customer_1");
    ns_web_url("Approve_Savings___Customer_1",
        "URL={baseUrl}/api/v1/savingsaccounts/{savingsIdParam}?command=approve",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_Setup_Savings_Accounts_Approve_Savings___Customer_1.json",
        BODY_END
    );
    ns_end_transaction("Approve_Savings___Customer_1", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("Activate_Savings_Account__Customer_1_");
    ns_web_url("Activate_Savings_Account__Customer_1_",
        "URL={baseUrl}/api/v1/savingsaccounts/{savingsIdParam}?command=activate",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_Setup_Savings_Accounts_Activate_Savings_Account__Customer_1_.json",
        BODY_END
    );
    ns_end_transaction("Activate_Savings_Account__Customer_1_", NS_AUTO_STATUS);
    ns_page_think_time(0);
    // post-response code for page : Activate_Savings_Account__Customer_1_
    ns_save_data_eval("/home/cavisson/work/workspace/admin/system/cavisson/data/shared/relief_account_details_entries_G2.csv",NS_TRUNC_FILE, "{clientIdParam},{savingsIdParam}");
}
