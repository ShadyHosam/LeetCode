class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        int current = 1, pos = 0;
        while(current<n){
            int d = 32;
            bool ok = 1;
            for(int k=current-1;k>=pos and d; k--){
                if(nums[current] & nums[k]){
                    ok = 0;
                    break;
                }
                d--;
            }
            if(ok){
                ans = max(ans,current-pos+1);
                current++;
            }else
                pos++;
            
        }
        return ans;
    }
};
