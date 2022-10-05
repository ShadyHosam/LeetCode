class Solution {
public:
    int n ,m ;
    bool isvalid(int i ,int j)
    {
        if (j+1<=m and j+2 <= m and i + 1 <= n and i+2 <= n)return true;
        return false;
        
    }
    int calc (vector<vector<int>>& grid , int i , int j)
    {
        int ret = 0;
        ret+= grid[i][j] + grid[i ][j + 1] + grid[i ][j +2 ];
        ret+=grid[i+1][j+1];
        ret+=grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2];
        return ret;
    }

    int maxSum(vector<vector<int>>& grid) {
    n= grid.size() - 1;
        m = grid[0].size() -1;
       // cout << n << " " << m <<"\n";

        bool visited[n + 1][m + 1];
        memset(visited,0,sizeof visited);
            int tot  = 0 ;
            for(int i = 0 ; i <n ;i++)
            {
                for (int j= 0 ;j < m ;j ++)
                {
                    if (isvalid(i , j))
                    {
                      //  cout << "ok\n";
                        int sum= calc(grid , i , j);
                        tot = max(tot ,  sum);
                    }
                }
            }
        return tot;
        
    }
};
