class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        set<int>st;
      for (int i = 0 ; i < n ;i++)
              if (nums[i])
                         st.insert(nums[i]);
      
               return st.size();
        }
};
