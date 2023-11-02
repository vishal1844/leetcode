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
    int t=0;
    pair<int,int>solve(TreeNode*root){
        if(root==NULL){
            return {0,0};
        }
        pair<int,int>p=solve(root->left);
        pair<int,int>q=solve(root->right);
        int k=p.first+q.first+root->val;
        int l=p.second+q.second+1;
        if(k/l==root->val)t++;
        return{k,l};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return t;
    }
};