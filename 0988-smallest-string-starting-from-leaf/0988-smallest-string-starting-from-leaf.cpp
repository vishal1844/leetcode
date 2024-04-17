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
    string smalstring="";
    void solve(TreeNode*root,string s){
        if(root==NULL)return;
        s=char((root->val)+'a')+s;
        if(root->left==NULL&&root->right==NULL){
            if(smalstring==""||smalstring>s){
                smalstring=s;
            }
        }
        if(root->left){
            solve(root->left,s);
        }
        if(root->right){
            solve(root->right,s);
        }
    }
public:
    string smallestFromLeaf(TreeNode* root) {
        solve(root,"");
        return smalstring;
    }
};