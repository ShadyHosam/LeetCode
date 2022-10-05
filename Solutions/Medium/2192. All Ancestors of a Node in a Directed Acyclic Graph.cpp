
class Solution {
public:

  void dfs (vector<vector<int>>&adj , vector<vector<int>>&result ,vector<bool>&visited, int node  ,int source  )
    {
        visited[node] = 1;
      
        if (node != source )
            result[source].push_back(node);
                
        for (auto &child : adj[node])
            if (!visited[child])
                dfs(adj , result , visited , child , source );
        
    }
    
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
    vector<vector<int>>adj(n);
        vector<vector<int>>Result(n);
        
        for (auto child : edges)
        
           adj[child[1]].push_back(child[0]);
        
        // push the child as a parent ..
        
                for (int i= 0 ;i<n ;i++)
                {
                  vector<bool>visited(n,0);
                 //   memset(visited , 0 , sizeof visited);
                    dfs (adj , Result , visited , i , i);
                }
        
                for(int i=0 ;i<n ;i++)
                    sort(Result[i].begin(), Result[i].end());
               
                return Result;
        
    
}
};
