class Solution {
public:
vector<int> twoSum(vector<int> &nums, int target) {
    int n = nums.size();
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int need = target - nums[i];
        if (mp.find(need) != mp.end()) {
            ans.push_back(i);
            ans.push_back(mp[need]);
            return ans;
        }
        mp[nums[i]] = i;
    }
    return ans;
}

};
