class Solution {
public:
vector<vector<int>> threeSum(vector<int> &nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    set<vector<int>> st;
    map<vector<int>, int> vmp;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        int l = i + 1, right = n - 1;
        int curr = nums[i];
        int needs = -curr;

        while (l < right) {
            if (nums[l] + nums[right] > needs)
                right--;
            else if  (nums[l] + nums[right] < needs)
                l++;

            else if (nums[l] + nums[right] == needs) {
                if (vmp.find(vector<int>{nums[i], nums[l], nums[right]}) == vmp.end()) {
                    ans.push_back(vector<int>{nums[i], nums[l], nums[right]});
                    vmp[vector<int>{nums[i], nums[l], nums[right]}]++;
                }
                l++;
            }
        }
    }


    return ans;
}





};
