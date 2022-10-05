
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        int n = s.size();
        
        for (int i = 0 ; i <  n ; i++)
        {
            for (int j = i +1 ; j <n ;j++)
            {
                if (s[i]==s[j])
                {
                    int dist = j - i - 1;
                    if (distance[s[i]-'a']!=dist)return false;
                }
            }
            
        }
        return true;
        
    }
};
