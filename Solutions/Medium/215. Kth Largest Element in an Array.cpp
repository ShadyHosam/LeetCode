class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        sort(nums.rbegin(),nums.rend());
        for (int i = 0 ;i < n ;i++)
        {    
            if (i + 1 == k)
            {  
                ans = nums[i];
                break;
        }
        }
        return ans;
    }
};
