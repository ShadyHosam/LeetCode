class Solution {
public:
string greatestLetter(string s) {
    string ans;
    string lo, hi;
    int n = s.size();
    map<char, int> flo, fmx;
    for (int i = 0; i < n; i++) {
        if (islower(s[i]))lo.push_back(s[i]), flo[s[i]]++;
        else hi.push_back(s[i]), fmx[s[i]]++;
    }
    sort(lo.rbegin(), lo.rend());
    sort(hi.rbegin(), hi.rend());
    for (int i = 0; i < lo.size(); i++)
        if (fmx[toupper(lo[i])]) {
            ans = toupper(lo[i]);
            return ans;
        }
    for (int i = 0; i < hi.size(); i++)
        if (flo[tolower(hi[i])]) {
            ans = toupper(hi[i]);
            return ans;
        }

    return ans;
}

    
};
