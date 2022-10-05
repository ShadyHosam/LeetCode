class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>ans;
        ans.resize(n , vector<int>(m , INT_MAX));
   queue<pair<int,int>>q;
        
        for (int i= 0 ; i< n ;i++)
        {
            for (int j = 0 ; j< m ;j++)
            {
                if (mat[i][j] == 0)
                {   
                   ans[i][j] = 0;
                    q.push({i,j});
                } 
        }
        }
        
        vector<pair<int ,int>>dirc{{0,1} ,{1,0} , {-1 , 0}, {0 ,-1}};
        while(!q.empty())
        {
            
            auto cur = q.front();
            q.pop();
            int cur_i = cur.first;
            int cur_j = cur.second;
            for (auto it : dirc)
            {
                int x = it.first+cur_i;
                int y = it.second+cur_j;
                
                if (x>=0 and x < n and y >=0 and y < m)
                {
                    if (ans[x][y] > ans[cur_i][cur_j] + 1)
                    {
                        ans[x][y] = ans[cur_i][cur_j] +1;
                        q.push({x,y});
                    }
                }
            }
        }
        
        return ans;
    }
};
