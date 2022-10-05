class Solution {
public:
    int dp[3 * 10000 + 2 ][2][2];
    int n;
    int dowork(int i , int buy , int sell , vector<int>&p)
    {
        if (i>=n)return 0;
        if (~dp[i][buy][sell])
            return dp[i][buy][sell];
        int op1 = 0 , op2 =0 ,leave = 0;
        leave = dowork(i+1 , buy , sell , p);
        if (buy)
            op1 = dowork(i+1 , 0 , 1 , p) - p[i];
        if (sell)
            op2 = dowork(i+1 , 1 , 0 , p) + p[i];
        return dp[i][buy][sell] =  op1 + op2;
        
    }
    
    int maxProfit(vector<int>&p) {
        n= p.size();
        memset(dp,-1,sizeof dp);
        return dowork(0,1,0,p);
        
        
    }
};
