class Solution {
public:
int dp[10000];
int n;

bool dowork(int i, vector<int> &nums) {
    if (i == nums.size() - 1)return 1;
    if (i > nums.size() - 1)
        return 0;
    // pick
    if (dp[i] != -1)
        return dp[i];

    for (int j = 1; j <= nums[i]; j++) {
        dp[i] = dowork(j + i, nums);
        if (dp[i])
            return dp[i];
    }
    return 0;
}

bool canJump(vector<int> &nums) {
// pick or leave
    bool ok = 0;
    n = nums.size();
    memset(dp, -1, sizeof dp);
  ok = dowork(0,nums);
    if (ok)return true;
    else return false;
}

};
