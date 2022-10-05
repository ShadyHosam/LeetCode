class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int>ans;
        for(int i=0;i<row;i++)
           for(int j=0;j<col;j++)
               ans.push_back(matrix[i][j]);
        sort(ans.begin(),ans.end());   
        return ans[k-1];
    }
};
