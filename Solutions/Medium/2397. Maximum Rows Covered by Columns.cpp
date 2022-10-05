class Solution {
public:
   int maximumRows(vector<vector<int>>& mat, int cols) {
    int n=mat.size();
    int m=mat[0].size();
    long long  all=pow(2,m)-1;
    long long  ans=0;
    vector<vector<int>> grid(all+10,vector<int>(m+10,0));
    for(int i=0;i<=all;i++){
        int current;
        current = i;
        for(int j=0;j<m;j++)
                  if((i&(1<<j))>=1)grid[i][j]=1;
        
    }
    for(int i=0;i<=all;i++){
        
        int counter =0;
        set<int> res;
        long long now=0;
        for(int j=0;j<m;j++)
            if(grid[i][j]==1)
                        res.insert(j),counter++;
            
        if(counter==cols){
            for(int i=0;i<n;i++){
                   bool check=0;
                for(int j=0;j<m;j++){
                    if(res.count(j)==0)
                               if(mat[i][j]==1)check=1;
                    
                }
                if(!check)now++;
            }
        }
        ans=max(ans,now);
    }
    return ans;
}

};
