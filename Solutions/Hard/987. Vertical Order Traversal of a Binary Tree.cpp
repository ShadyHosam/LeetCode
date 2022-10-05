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
   vector<vector<int>> verticalTraversal(TreeNode* root) {
    
    vector<vector<int>>res;
    if(!root) return res;
    
    map <int , map <int,vector<int>>> mp;  
    
    queue <pair<TreeNode*, pair<int,int>> > q;  
    
    q.push({root,{0,0}});  //node, hd, lvl
    
    while(!q.empty()){
        
        auto f=q.front();
        q.pop();
        
        TreeNode* curr=f.first;      
        int hd=f.second.first;       
        int lvl=f.second.second;   
    
        mp[hd][lvl].push_back(curr->val);  
        
        if(curr->left) q.push({curr->left,{hd-1,lvl+1}});     
        if(curr->right) q.push({curr->right,{hd+1,lvl+1}});    
    }
    
    
    
    for(auto i:mp){
        vector<int>ans;
        for(auto j:i.second){
            sort(j.second.begin(), j.second.end());
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
        res.push_back(ans);
    }
            
    return res;
}
};
