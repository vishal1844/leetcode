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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        int i,j,k,l,m,t=0;
        if(root==NULL)return ans;
        stack<TreeNode*>st1,st2;
        st1.push(root);
        while(!st1.empty()){
            auto itr=st1.top();
            st1.pop();
            st2.push(itr);
            if(itr->left){
                st1.push(itr->left);
            }
            if(itr->right){
                st1.push(itr->right);
            }
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
    }
};