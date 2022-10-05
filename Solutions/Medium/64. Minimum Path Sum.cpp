class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size()-1;
        int m=grid[0].size()-1;
          for (int i=1  , len =grid.size();i<len  ; i++ )
              grid[i][0]+=grid[i-1][0];
        
        
        for (int i= 1 , len =grid[0].size(); i < len ; i++)
                 grid[0][i]+=grid[0][i-1];
        
        
        for (int i=1  , len = grid.size() ; i<len ;i++)
        {
            for (int j=1  ,len = grid[0].size() ; j<len ;j++)
            {
                grid[i][j]+=min(grid[i][j-1],grid[i-1][j]);
            }
            
        }
        return grid[n][m];
    }
};
