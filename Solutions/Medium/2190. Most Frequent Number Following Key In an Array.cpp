class Solution {
public:
        int mostFrequent(vector<int>& nums, int key) {

        vector<int>freq(nums.size() , 0);
        bool ok=0;
        map<int,int>mp;
        for(int i=0 ;i < nums.size();i++)
        {
            if (ok == 1)
            {
                mp[nums[i]]++;
                ok=0;
            }

           if (nums[i] == key)
                ok = 1;

        }
        int mx=0;
        int value=0;
        for(auto it:mp)
        {
            if (it.second > mx )
            {
                mx = it.second;
                value = it.first;
            }
        }
        return  value;
    }


};
