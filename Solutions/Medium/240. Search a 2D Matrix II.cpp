class Solution {
public:
bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int n, m;
    n = matrix.size();
    m = matrix[0].size();
    int i = 0, j = m - 1;
    while (i < n and j >= 0) {
            if (matrix[i][j] == target)return 1;
            if (matrix[i][j] < target)i++;
            else j--;
        }
    return false;
}
};
