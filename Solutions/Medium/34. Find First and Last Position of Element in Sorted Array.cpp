class Solution {
public:
  int ks; 
    
int BS1(vector<int> &nums, int target) {
    int low = 0, high = nums.size() -1 ;
    int ans = -1;
    while (low <= high) {
        int md = (low + high) / 2;
        if (nums[md] == target)ans = md, high = md - 1;
        else if (nums[md] > target)high = md - 1;
        else low = md + 1;
    }
    return ans;
}

int BS2(vector<int> &nums, int target) {
    int low = 0, high = nums.size()-1 ;
    int ans = -1;
    while (low <= high) {
        int md = (low + high) / 2;
        if (nums[md] == target)ans = md, low = md + 1;
        else if (nums[md] > target)high = md - 1;
        else low = md + 1;
    }
    return ans;
}

vector<int> searchRange(vector<int> &nums, int target) {
    int n = nums.size();
    vector<int> ans(2, -1);
    if (n == 0)return ans;
    ans[0] = BS1(nums, target);
    ans[1] = BS2(nums, target);
    return ans;
}

};
