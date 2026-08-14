nsl_date_var(transferDateParam, Format="%m/%d/%Y", Unique=YES, Refresh=SESSION);
nsl_search_var(authkey, PAGE=Login, LB/IC="\"base64EncodedAuthenticationKey\":\"", RB/IC="\"", LBMATCH=FIRST, ORD=1, SaveLen=0, ActionOnNotFound=Error, Search=Body, RETAINPREVALUE="NO", EncodeMode=All);
nsl_static_var(userIdParam:1,savingsIdParam:2, DATADIR=shared, File=saving_account_details.csv, Refresh=SESSION, Mode=UNIQUE, EncodeMode=All, RemoveDupRecords=No);
nsl_decl_var(authToken,RETAINPREVALUE="NO");
nsl_decl_var(initialBalance,RETAINPREVALUE="NO");
nsl_decl_var(tenantId,DefaultValue="default",RETAINPREVALUE="NO");
nsl_decl_var(accountId,RETAINPREVALUE="NO");
nsl_decl_var(balanceBeforeTransfer,RETAINPREVALUE="NO");
