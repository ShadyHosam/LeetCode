class Solution {
public:
int dp[3000 + 10][3000 + 10];
int dowork(int i, int rem, int n, vector<int> &can ) {
    if (rem == 0)return 0;
    if (i >= n || rem < 0)return 1e6;
    int &ans = dp[i][rem];
    if (~ans)return dp[i][rem];
    int op1 = dowork(i , rem - can[i], n, can) ;
    if (op1!=INT_MAX)op1+=1;
    int op2 = dowork(i + 1, rem, n, can);
    return dp[i][rem] = min(op1 , op2);
}

int minimumNumbers(int num, int k) {
    memset(dp, -1, sizeof dp);
    vector<int> can;
    for (int i = 1; i <= num; i++)
        if (i % 10 == k)can.push_back(i);
    int n = can.size();
    int ans = dowork(0, num, n, can);
    return ans == 1e6 ? -1 : ans;
}

};
