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
extern FlowReturn Login();
extern FlowReturn CreateCustomer();
extern FlowReturn CreateSavingsAccounts();
extern FlowReturn DepositMoney();
// End - List of used flows in the runlogic


void CreateAccounts()
{
    NSDL2_RUNLOGIC(NULL, NULL, "Executing init_script()");

    init_script();

    NSDL2_RUNLOGIC(NULL, NULL, "Executing sequence block - Start");
    {
        UPDATE_USER_FLOW_COUNT(0)
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - Login");
        UPDATE_USER_FLOW_COUNT(1)
        Login();
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - CreateCustomer");
        UPDATE_USER_FLOW_COUNT(3)
        CreateCustomer();
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - CreateSavingsAccounts");
        UPDATE_USER_FLOW_COUNT(5)
        CreateSavingsAccounts();
        NSDL2_RUNLOGIC(NULL, NULL, "Executing flow - DepositMoney");
        UPDATE_USER_FLOW_COUNT(9)
        DepositMoney();
    }

    NSDL2_RUNLOGIC(NULL, NULL, "Executing ns_exit_session()");
    ns_exit_session();
}
