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
    void preorder(TreeNode*root,int &sum,int level,int &ans){
        if(root==NULL)return;
        if(level==sum){
            ans=root->val;
            sum++;
        }
        preorder(root->left,sum,level+1,ans);
        preorder(root->right,sum,level+1,ans);
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        int sum=0;
        preorder(root,sum,0,ans);
        return ans;
    }
};