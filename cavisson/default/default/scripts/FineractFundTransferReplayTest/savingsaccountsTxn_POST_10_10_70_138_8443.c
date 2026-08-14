#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void savingsaccountsTxn_POST_10_10_70_138_8443()
{
    ns_start_transaction ("savingsaccountsTxn_POST_10_10_70_138_8443");
    ns_web_url ("savingsaccountsTxn_POST_10_10_70_138_8443",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/savingsaccounts/*",
        "METHOD=POST",
        "HEADER=Authorization:Basic bWlmb3M6cGFzc3dvcmQ=",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=savings_body.json",
        BODY_END
    );
    ns_end_transaction ("savingsaccountsTxn_POST_10_10_70_138_8443", NS_AUTO_STATUS);

    ns_page_think_time(((double )ns_get_pg_think_time())/1000.0);
}
