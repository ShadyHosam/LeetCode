class Solution {
public:
        int dp[5000+10][2];
    int n;
    int dowork(int i , bool cooldown ,  vector<int>&p)
    {
        if (i>=n)return 0;
        if (~dp[i][cooldown])
            return dp[i][cooldown];
        int op1 = 0 , op2 =0 ;
        int leave = 0;
        if (!cooldown)
        {
            leave = dowork(i+1 , 0 , p);
            op1 = dowork(i+1, 1 , p)-p[i];
        }
        if (cooldown)
        {
            op2 = max(
            dowork(i + 1 , 1 , p) , 
                dowork(i+2 , 0 , p) + p[i]);
        
        }
        return dp[i][cooldown] = max(leave , op1 + op2 );
        
    }
    int maxProfit(vector<int>& p) {
         n= p.size();
        memset(dp,-1,sizeof dp);
        return dowork(0,0,p);
        
    }
};
