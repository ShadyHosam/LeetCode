class Solution {
public:
int countPrefixes(vector<string> &words, string s) {
    map<string , int> mp;
    int n = words.size();
       int cnt =0;
        for (int i=0 ; i < n ; i++)
        {
          mp[words[i]]++;
        }

        string tmp="";
        for (int i =0 ;i< s.size(); i++)
        {
            tmp+=s[i];
            if (mp.find(tmp) !=mp.end())
                cnt+=mp[tmp];
        }
    return  cnt;
}
};
