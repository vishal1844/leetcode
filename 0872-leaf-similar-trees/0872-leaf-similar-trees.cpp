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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v,vec;
        dfs(root1,v);
        dfs(root2,vec);
        if(v==vec){
            return 1;
        }
        return 0;
    }
    void dfs(TreeNode*root,vector<int>&v){
        if(root==NULL)return;
        if(root->left==NULL&&root->right==NULL){
            v.push_back(root->val);
        }
        dfs(root->left,v);
        dfs(root->right,v);
    }  
};