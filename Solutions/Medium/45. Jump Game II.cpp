class Solution {
public:
int dp[10000 + 10];
int n;

int dowork(int i, vector<int> &nums) {
    if (i == n - 1)return 0;
    if (i >= n)return 1e6;
    if (dp[i] != -1)return dp[i];
    int ans = 1e6;
    for (int j = 1; j <= nums[i]; j++) {
        ans = min(ans, dowork(i + j, nums) + 1);
    }
    return dp[i] = ans;
}

int jump(vector<int> &nums) {
    n = nums.size();
    memset(dp, -1, sizeof dp);
    return dowork(0, nums);
}
};
