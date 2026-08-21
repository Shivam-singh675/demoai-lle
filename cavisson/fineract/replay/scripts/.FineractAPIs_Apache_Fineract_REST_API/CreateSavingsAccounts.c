/*-----------------------------------------------------------------------------
    Name: CreateSavingsAccounts
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

void CreateSavingsAccounts()
{
    // should_add_think_time will be updated in condition block of ns_web_url and call thinktime post-response code execution.
    int should_add_think_time = 0;
    ns_start_transaction("CreateSavingAccount");
    ns_web_url("CreateSavingAccount",
        "URL={baseUrl}/api/v1/savingsaccounts",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_CreateSavingsAccounts_CreateSavingAccount.json",
        BODY_END
    );
    ns_end_transaction("CreateSavingAccount", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("ApproveSavingAccount");
    ns_web_url("ApproveSavingAccount",
        "URL={baseUrl}/api/v1/savingsaccounts/{savingsIdParam}?command=approve",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_CreateSavingsAccounts_ApproveSavingAccount.json",
        BODY_END
    );
    ns_end_transaction("ApproveSavingAccount", NS_AUTO_STATUS);
    ns_page_think_time(0);
    ns_start_transaction("ActivateSavingAccount");
    ns_web_url("ActivateSavingAccount",
        "URL={baseUrl}/api/v1/savingsaccounts/{savingsIdParam}?command=activate",
        "METHOD=POST",
        "HEADER=Content-Type:application/json",
        "HEADER=Authorization:Basic {authKey}",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=Apache_Fineract_REST_API_CreateSavingsAccounts_ActivateSavingAccount.json",
        BODY_END
    );
    ns_end_transaction("ActivateSavingAccount", NS_AUTO_STATUS);
    ns_page_think_time(0);

    // post-response code for page : ActivateSavingAccount
    ns_save_data_eval("/home/cavisson/work/workspace/admin/system/cavisson/data/shared/saving_account_details.csv",NS_TRUNC_FILE, "{clientIdParam},{savingsIdParam}");
}
