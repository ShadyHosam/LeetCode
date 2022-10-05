class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<long long > ans;
     map<long long ,long long>mp;
        for (int i=0; i<m;i++)
            mp[nums1[i]]++;
           
        
         for(int i=0; i<n;i++)
            mp[nums2[i]]++;
           
        
        for (auto it:mp)
        {
            while(it.second!=0)
            {
          ans.push_back(it.first);
            it.second--;
            
        }
        }
        for(int i=0 ;i<ans.size(); i++)
            nums1[i] = ans[i];
        
        return;
    }
};
