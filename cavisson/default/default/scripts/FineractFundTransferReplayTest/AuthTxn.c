#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void AuthTxn()
{
    ns_start_transaction ("AuthTxn");
    ns_web_url ("AuthTxn",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/authentication",
        "METHOD=POST",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=auth_body.json",
        BODY_END
    );
    ns_end_transaction ("AuthTxn", NS_AUTO_STATUS);

    ns_page_think_time(((double )ns_get_pg_think_time())/1000.0);
}
