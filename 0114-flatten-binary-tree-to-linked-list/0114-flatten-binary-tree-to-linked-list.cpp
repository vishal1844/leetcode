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
    void flatten(TreeNode* root) {
        if(root!=NULL){
        TreeNode*node=root;
        stack<TreeNode*>st;
        if(root->right)st.push(root->right);
            if(root->left)st.push(root->left);
        //st.push(root);
        while(!st.empty()){
            auto itr=st.top();
            st.pop();
            node->right=new TreeNode(itr->val);
            node->left=NULL;
            node=node->right;
            if(itr->right)st.push(itr->right);
            if(itr->left)st.push(itr->left);
        }
        root=node;
        }
    }
};