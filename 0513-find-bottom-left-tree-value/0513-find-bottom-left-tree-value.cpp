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
    int findBottomLeftValue(TreeNode* root) {
        int t=0;
        queue<pair<TreeNode*,int>>q;
        if(root==NULL)return 0;
        int left=root->val;
        q.push({root,0});
        while(!q.empty()){
            auto itr=q.front();
            q.pop();
            if(t<itr.second){
                t=itr.second;
                left=itr.first->val;
            }
            if(itr.first->left){
                q.push({itr.first->left,itr.second+1});
            }
            if(itr.first->right){
                q.push({itr.first->right,itr.second+1});
            }
        }
        return left;
    }
};