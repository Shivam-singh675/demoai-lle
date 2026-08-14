nsl_date_var(transferDateParam, Format="%m/%d/%Y", Refresh=SESSION);
nsl_search_var(authkey, PAGE=Login, LB/IC="\"base64EncodedAuthenticationKey\":\"", RB/IC="\"", LBMATCH=FIRST, ORD=1, SaveLen=0, ActionOnNotFound=Error, Search=Body, RETAINPREVALUE="NO", EncodeMode=All);
nsl_static_var(reliefFundClientIdParam:1,reliefFundSavingsIdParam:2, DATADIR=shared, File=relief_account_details.csv, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
nsl_static_var(userIdParam:1,savingsIdParam:2, DATADIR=shared, File=saving_account_details.csv, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
nsl_static_var(reliefFundClientIdMtoMG2Param:1,reliefFundSavingIdMtoMG2Param:2, DATADIR=shared, File=relief_account_details_entries_G2.csv, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
nsl_decl_var(tenantId,DefaultValue="default",RETAINPREVALUE="NO");
