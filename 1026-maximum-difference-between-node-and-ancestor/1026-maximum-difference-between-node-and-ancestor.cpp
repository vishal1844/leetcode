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
public:
    int find(TreeNode*root,int maxi,int mini){
        if(root==NULL){
            return maxi-mini;
        }
        maxi=max(maxi,root->val);
        mini=min(mini,root->val);
        return max(find(root->left,maxi,mini),find(root->right,maxi,mini));
    }
    int maxAncestorDiff(TreeNode* root) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        return find(root,maxi,mini);
    }
};