class Solution {
public:
    int minCost(string s, vector<int>& a) {
        int n = a.size();
        int ans = 0;
        
        for (int i = 0 ;  i < n  - 1; ) 
        { 
         
        bool ok = 0;    
        int mx = 0 ;
        int tot = 0;
        int j = i , cur= i;
            while(j + 1 < n and s[j]==s[j + 1])
          { 
                cout << a[j] <<" ";
                ok = 1;
                tot+=a[j + 1];
              
                mx = max(mx , a[j + 1]);
              j++;
            }
            if (ok)
            {
                mx = max(mx , a[ cur]);
                tot+=a[cur];
                tot-=mx;
            }
            ans+=tot;
            i = j+1;
        }
        return ans;
    }
};
