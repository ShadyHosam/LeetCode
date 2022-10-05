/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          if (nullptr == root || root == p || root == q) {
        return root;
    }
    
    auto p1 = lowestCommonAncestor(root->left, p, q);
    auto p2 = lowestCommonAncestor(root->right, p, q);
    return p1 && p2 ? root : p1 ? p1 : p2;
    }
};
