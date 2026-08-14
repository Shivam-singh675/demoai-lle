/*-----------------------------------------------------------------------------
    Name: runlogic 
    runlogic details:
    Modification History:
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ns_string.h"
#ifdef ENABLE_RUNLOGIC_PROGRESS
  #define UPDATE_USER_FLOW_COUNT(count) update_user_flow_count(count);
#else
  #define UPDATE_USER_FLOW_COUNT(count)
#endif


extern int init_script();
extern int exit_script();

typedef void FlowReturn;

// Note: Following extern declaration is used to find the list of used flows. Do not delete/edit it
// Start - List of used flows in the runlogic
extern FlowReturn AccountTransferTxn();
extern FlowReturn AuthTxn();
extern FlowReturn savingsaccountsTxn_GET_10_10_70_138_8443();
extern FlowReturn savingsaccountsTxn_POST_10_10_70_138_8443();
extern FlowReturn default_txn_10_10_70_138_8443();
extern FlowReturn default_flow();
// End - List of used flows in the runlogic


void runlogic()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing while block - MorePages. NS Variable = cav_replay_more_pages:0:>");
    {
        UPDATE_USER_FLOW_COUNT(0)

        NSDL2_RUNLOGIC(NULL, NULL, "NS Variable value for block - MorePages = %d", ns_get_int_val("cav_replay_more_pages"));
        while(ns_get_int_val("cav_replay_more_pages") > 0)
        {

            NSDL2_RUNLOGIC(NULL, NULL, "Executing switch block - NextPages. NS Variable = cav_replay_page_id");
            {
                UPDATE_USER_FLOW_COUNT(1)

                NSDL2_RUNLOGIC(NULL, NULL, "NS Variable value for block - NextPages = %d", ns_get_int_val("cav_replay_page_id"));
                switch(ns_get_int_val("cav_replay_page_id"))
                {
                    case 0:
                        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - AccountTransferTxn (case value = 0)");
                        UPDATE_USER_FLOW_COUNT(2)
                        AccountTransferTxn();
                        break;
                    case 1:
                        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - AuthTxn (case value = 1)");
                        UPDATE_USER_FLOW_COUNT(4)
                        AuthTxn();
                        break;
                    case 2:
                        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - savingsaccountsTxn_GET_10_10_70_138_8443 (case value = 2)");
                        UPDATE_USER_FLOW_COUNT(6)
                        savingsaccountsTxn_GET_10_10_70_138_8443();
                        break;
                    case 3:
                        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - savingsaccountsTxn_POST_10_10_70_138_8443 (case value = 3)");
                        UPDATE_USER_FLOW_COUNT(8)
                        savingsaccountsTxn_POST_10_10_70_138_8443();
                        break;
                    case 4:
                        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - default_txn_10_10_70_138_8443 (case value = 4)");
                        UPDATE_USER_FLOW_COUNT(10)
                        default_txn_10_10_70_138_8443();
                        break;
                    default:
                        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - default_flow (case value = -1)");
                        UPDATE_USER_FLOW_COUNT(12)
                        default_flow();
                        break;
                }
            }
        }
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
