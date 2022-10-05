class Solution {
public:
    int a[201];
    int b[201];
    int n;
    int dp[201][201][201];
    int dowork(int i , int sz_a , int sz_b)
    {
        if (i >= n)return 0;
      
        if (sz_a == n / 2)
            return dowork(i+1 , sz_a , sz_b  + 1) + b[i];
        if (sz_b == n/ 2)
            return dowork(i+1  , sz_a+ 1 , sz_b  ) + a[i];
        int &ret = dp[i][sz_a][sz_b];
        if (~ret )return ret;
        
        int op1 = INT_MAX ;
        int op2 = INT_MAX;
        if (sz_a< n / 2)
             op1 = dowork(i+1 , sz_a + 1 , sz_b )+a[i];
        
        if (sz_b < n / 2)
           op2 = min(op1 , dowork(i+1 , sz_a , sz_b + 1 )+b[i]);
        
        return dp[i][sz_a][sz_b] =  op2 ;
          
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        n = costs.size();
        for (int i = 0 ; i < n ;i++)
            a[i] = (costs[i][0]);
        for (int i = 0 ; i < n ;i++)
            b[i] = (costs[i][1]);
         memset(dp,-1,sizeof dp);
        int ret = dowork(0 ,0, 0);
        return ret;
    }
};
