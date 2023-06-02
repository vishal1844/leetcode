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
    bool path(TreeNode*root,int sum,int targetSum){
        if(root==NULL)return 0;
        if(root->left==NULL&&root->right==NULL){
            if(sum+root->val==targetSum)return 1;
            return 0;
        }
        if(root->left!=NULL){
        if(path(root->left,sum+root->val,targetSum)){
            return 1;
        }
        }
        if(root->right!=NULL){
        if(path(root->right,sum+root->val,targetSum)){
            return 1;
        }
        }
        return 0;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return path(root,0,targetSum);
    }
};