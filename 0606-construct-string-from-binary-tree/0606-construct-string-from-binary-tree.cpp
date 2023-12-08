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
    void solve(TreeNode*root,string&s){
        if(root==NULL)return;
        // if(root->val<0){
        s+=to_string(root->val);
        //     s+="-";
        // }
        // root->val=abs(root->val);
        // s+=(root->val+'0');
        //if(root==NULL)return;
        if(root->left==NULL&&root->right==NULL)return;
        // s+=(root->val+'0');
        //if(root->left!=NULL){
            s+='(';
            solve(root->left,s);
            s+=')';
        //}
        if(root->right!=NULL){
            s+='(';
            solve(root->right,s);
            s+=')';
        }
        
    }
public:
    string tree2str(TreeNode* root) {
        if(root==NULL)return "";
        string s="";
        solve(root,s);
        return s;
    }
};