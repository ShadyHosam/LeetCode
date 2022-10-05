class Solution {
public:
int dp[5 * 10000 + 10];
int n;
bool dowork(int i, vector<int> &arr) {
    if (i > n - 1 || i < 0 )return 0;
    if (!~arr[i])return 0;
    if (!arr[i])return 1;
    if (~dp[i])return dp[i];
    int idx = arr[i];
    arr[i] = -1;
    int op1 = dowork(i + idx, arr);
    int op2 = dowork(i - idx, arr);
    return dp[i] = max(op1 , op2);
}
bool canReach(vector<int> &arr, int start) {
    n = arr.size();
    memset(dp, -1, sizeof dp);
    bool ans = dowork(start, arr);
    if (ans)return true;
    else return false;
}
};
