/*-----------------------------------------------------------------------------
    Name: flow
    Recorded By: netstorm
    Date of recording: 03/15/2017 11:00:25
    Flow details:
    Build details: 4.1.7 (build# 34)
    Modification History:
-----------------------------------------------------------------------------*/

package com.cavisson.scripts.TestJul_30_125102;
import pacJnvmApi.NSApi;
import java.util.*;
import pacJnvmApi.JDBCPool;

public class flow implements NsFlow
{
    public int execute(NSApi nsApi)
    {
      int status;
      //System.out.println("Going to execute nsdb replay query");
      Object[] status1 = nsApi.ns_db_replay_query();
      int pageId= Integer.parseInt(status1[0].toString());
      int status2 = Integer.parseInt(status1[1].toString());
      String msg = status1[2].toString();
      //System.out.println("The data are - " + pageId + ", " + status2 + ", " + msg );
      status = nsApi.ns_db_replay_query_end(pageId, status2, msg);
      return 0;
    }
}
