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
    vector<int>inorder;
    int p=0;
    TreeNode* inor(TreeNode*root){
        if(root==NULL)return 0;
      
        //if(root->left!=NULL)
        inor(root->left);
        //cout<<root->val;
       // cout<<inorder[p]<<" ";
        // int t=inorder[p++];
        //  root->val=t;
        root->val=inorder[p++];
       // cout<<root->val<<p<<" ";
        //if(root->right!=NULL)
            inor(root->right);
        return root;
    }
public:
    void recoverTree(TreeNode* root) {
        // vector<int>inorder;
        stack<TreeNode*>st;
        TreeNode*root1=root;
        while(1){
            if(root){
                st.push(root);
                root=root->left;
            }
            else{
                if(st.empty())break;
                TreeNode* temp=st.top();
                st.pop();
                inorder.push_back(temp->val);
                root=temp->right;
            }
        }
        //root1->val=5;
        //root=root1;
       root=root1;
        sort(inorder.begin(),inorder.end());
       root1=inor(root);
       // ino(root1);
        //root=root1;
    }
};