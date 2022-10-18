class Solution {
public:

    string countAndSay(int n) {
         int cnt = 1;
        string res;
        if (n == 1)return "1";
        if (n == 2)return "11";
        string go =countAndSay(n - 1);
        for (int i= 0 ; i < go.size() ; i++)
        {
            if (go[i] == go[i + 1])
                cnt++;
            else {
                res +=to_string(cnt);
                res+=go[i];
                cnt = 1;
            }
        }
        return res;
    }
};
