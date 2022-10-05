class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.size();
        int m = t.size();
        if (n !=m)return false;
        sort(s.begin(),s.end());
         sort(t.begin(),t.end());
        for (int i = 0 ; i <n ;i++)
            if (s[i]!=t[i])return false;
                return true;
    }
};
