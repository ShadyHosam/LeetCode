class Solution {
public:vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
    map<int,int>mp;
    vector<pair<int,int>>vp;
    vector<int>ans;
    for (int i=0 ; i < nums.size();i++)
            {
                string s = to_string(nums[i]);
                for (int j =0 ;j < s.size();j++) {
                    int y = s[j]-'0';
                    int temp =  mapping[y];
                    temp+='0';
                    s[j] = temp;
                }

                stringstream converting(s);
                int x = 0;
                converting >> x;
              //  ans.push_back(x);
                //mp[x] =nums[i];
                vp.push_back({x,i});
            }
    sort(vp.begin(),vp.end());

    for(int i=0 ;i<vp.size();i++)
        ans.push_back(nums[vp[i].second]);
          return ans;
}

};
