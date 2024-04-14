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
   // int t=0;
    int solve(TreeNode*root,int t){
        if(root==NULL)return 0;
        if(root->left==NULL&&root->right==NULL){
            if(t==1)return root->val;
            return 0;
        }
        //if(root->left==NULL||root->right==NULL)return ;
        int k=0;
        if(root->left){
            k+= solve(root->left,1);
        }
        if(root->right){
            k+= solve(root->right,0);
        }
        return k;
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root,0);
       // return t;
    }
};