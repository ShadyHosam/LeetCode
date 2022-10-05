class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bool visited[nums.size() + 5];
        int ans = 0;
        memset(visited,0,sizeof visited);
        for(int i =0 ; i < nums.size(); i++)visited[nums[i]]=1;
        for(int i = 0 ;i <= nums.size() ; i++)
            if (!visited[i])
                ans=i;
            return ans;
        
    }
};
