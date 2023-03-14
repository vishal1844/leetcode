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
    int sum(TreeNode*root,string s){
        if(root==NULL){
            return 0;
        }
        s+=(root->val+'0');
        if(root->left==NULL&&root->right==NULL){
            int i=stoi(s);
            s="";
            //sum+=i;
            return i;
        }
        int t=sum(root->left,s);
        int k=sum(root->right,s);
        return t+k;
    }
    
    
public:
    int sumNumbers(TreeNode* root) {
        if(root==NULL)return 0;
       // int sum=0;
        string s;
        return sum(root,s);
    }
};