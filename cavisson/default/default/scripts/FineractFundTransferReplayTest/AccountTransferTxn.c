#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"

void AccountTransferTxn()
{
    ns_start_transaction ("AccountTransferTxn");
    ns_web_url ("AccountTransferTxn",
        "URL=https://10.10.70.138:8443/fineract-provider/api/v1/accounttransfers",
        "METHOD=POST",
        "HEADER=Authorization:Basic bWlmb3M6cGFzc3dvcmQ=",
        "HEADER=Fineract-Platform-TenantId:default",
        BODY_BEGIN,
            "$CAVINCLUDE$=transfer_body.json",
        BODY_END
    );
    ns_end_transaction ("AccountTransferTxn", NS_AUTO_STATUS);

    ns_page_think_time(((double )ns_get_pg_think_time())/1000.0);
}
