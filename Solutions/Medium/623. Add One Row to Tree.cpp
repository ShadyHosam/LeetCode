/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
            if(depth==1){
                TreeNode* nw = new TreeNode(val);
                nw->left = root;
                return nw;
    
                    }
    
        queue<TreeNode*>q;
        q.push(root);
        int cur_depth = 1;
        while(!q.empty())
        {
          int sz = q.size();
            while(sz--)
            {
            auto node = q.front();
            q.pop();
            if (depth == cur_depth+1)
            {
                TreeNode* new_l = new TreeNode(val);
                TreeNode* new_r = new TreeNode(val);
                new_l->left = node->left;
                new_r->right = node->right;
                node->left = new_l;
                node->right = new_r;
            }
            if (node->left)q.push(node->left);
            if (node->right)q.push(node->right);
        }
        cur_depth++;
        }
        
     return root;
    }
  
};
