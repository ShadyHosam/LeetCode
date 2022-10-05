class Solution {
public:
    string restoreString(string s, vector<int>& ind) {
        int n = ind.size();
        string ans = s;
        //sort(ind.begin(),ind.end());
        for (int i = 0  ; i <n ;i++)
           {
            ans[ind[i]]=s[i];
           }
        return ans;
    }
};
