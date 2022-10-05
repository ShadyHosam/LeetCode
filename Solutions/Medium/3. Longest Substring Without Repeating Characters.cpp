class Solution {
public:
int lengthOfLongestSubstring(string s) {
    int n = s.size();
    if (n == 0)return 0;
    int mx = 0;
    int st = 0;
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp.find(s[i]) != mp.end()) {
            st = max(st,mp[s[i]] + 1);
        }
        mx = max(mx, i - st + 1);
        mp[s[i]] = i;

    }
    return mx;
}




};
