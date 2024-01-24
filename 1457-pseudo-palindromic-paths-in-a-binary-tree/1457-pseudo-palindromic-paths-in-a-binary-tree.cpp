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
    int sum=0;
    void checkpalin(TreeNode*root,int val){
        if(root==NULL)return;
        val^=(1<<(root->val));
        if(root->left==NULL&&root->right==NULL){
            if((val&(val-1))==0){
                sum++;
                return;
            }
        }
        checkpalin(root->left,val);
        checkpalin(root->right,val);
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        checkpalin(root,0);
        return sum;
    }
};