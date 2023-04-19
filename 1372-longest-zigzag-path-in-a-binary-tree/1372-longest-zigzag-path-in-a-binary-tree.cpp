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
    void solve(TreeNode*root,int &maxi,char ch,int count){
        if(root==NULL){
            return;
        }
        maxi=max(maxi,count);
        if(ch=='l'){
            solve(root->left,maxi,'r',count+1);
            solve(root->right,maxi,'l',1);
        }
        else{
            solve(root->right,maxi,'l',count+1);
            solve(root->left,maxi,'r',1);
        }
    }
public:
    int longestZigZag(TreeNode* root) {
        int maxi=0,i,j,count=0;
        solve(root,maxi,'l',count);
        solve(root,maxi,'r',count);
        return maxi;
    }
};