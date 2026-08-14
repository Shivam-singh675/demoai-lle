/*-----------------------------------------------------------------------------
    Name: runlogic 
    runlogic details:
    Modification History:
-----------------------------------------------------------------------------*/

package TestJul_24_150441_Group_1.runlogic;

import TestJul_24_150441_Group_1.*;

import pacJnvmApi.NSApi;

public class runlogic
{

    // Note: Following extern declaration is used to find the list of used flows. Do not delete/edit it
    //Start - List of used flows in the runlogic
    //Initialise the Flow_1 class
    Flow_1 Flow_1Obj = new Flow_1();
    //End - List of used flows in the runlogic

    public void execute(NSApi nsApi) throws Exception
    {
        //Logging
        int initStatus = init_script.execute(nsApi);

        //Executing sequence block - Start
        //Executing flow - Flow_1
        Flow_1Obj.execute(nsApi);

        //logging
        nsApi.ns_end_session();
    }

}
