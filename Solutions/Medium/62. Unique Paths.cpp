class Solution {
int dp[101][101];

public:
    int uniquePaths(int m, int n) {

        if (m==1 ||n==1)return 1;
        if (dp[m][n])return dp[m][n];
        else 
        return dp[m][n] = uniquePaths(m,n-1)+uniquePaths(m-1,n);
        
    }
};
