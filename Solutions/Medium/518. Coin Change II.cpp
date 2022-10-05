class Solution {
public:
    int change(int amount, vector<int>& coins) {

    int dp[amount+3000];
        
        memset(dp,0,sizeof dp);
      dp[0] = 1;
        for (int i=0 ;i <coins.size() ;i++)
           {
               for (int j =0  ; j <=amount ;j++)
               {
                  if (j + coins[i] <=amount)
                     dp[j + coins[i]]+=dp[j];
                    }

    }
return dp[amount];

    }
};
