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
    int solve(TreeNode*root){
        if(root->left==NULL&&root->right==NULL) return root->val;
        int l=0,r=0;
        if(root->left!=NULL){
            l=solve(root->left);
        }
        if(root->right!=NULL){
            r=solve(root->right);
        }
        if(root->val==2){
            return l|r;
        }
        else
             return l&r;
    }
public:
    bool evaluateTree(TreeNode* root) {
        return solve(root);
    }
};