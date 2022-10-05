#include <bits/stdc++.h>

using namespace std;
#define  ll long long
class Solution {
public:
int minimumAverageDifference(vector<int> &nums) {
    vector<ll> prefix(nums.size());
    
    prefix[0] = nums[0];
    ll sum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        prefix[i] = prefix[i - 1] + nums[i];
        sum += nums[i];
    }
    int n = nums.size();
    int l = n-1;
    vector<pair<ll, int>> ans;
    for (int i = 0; i < nums.size() - 1; i++) {
        ans.push_back({abs((prefix[i] / (i + 1)) - (sum - prefix[i]) / (l)), i});
        l--;
    }
    ans.push_back({abs(prefix[n - 1]) / n, n-1});
    sort(ans.begin(), ans.end());
    return ans[0].second;
}
};
