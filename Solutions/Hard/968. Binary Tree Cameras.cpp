class Solution 
{
public:
    int res = 0;
    
    int minCameraCover(TreeNode* root) 
    {
        int ans = dfs(root);
        if (ans == 0 )ans = 1;
        else ans = 0;
        return ans + res;
    }

    int dfs(TreeNode* root) 
    {
        if (root == 0)return 2;
        int goleft =dfs(root->left);
        int goright = dfs(root->right);
        if (goright == 0 or goleft == 0) // dosn't have camera on it..
        {
            res++;
            return 1;
        }
            
        if (goright == 1 or goleft == 1)return 2;
        else return 0;
    }
};
