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
    TreeNode* buildin(vector<int>&inorder,int is,int ie,vector<int>&postorder,int ps,int pe,unordered_map<int,int>&mp){
        if(is>ie||ps>pe)return NULL;
        TreeNode*root=new TreeNode(postorder[pe]);
        int t=mp[postorder[pe]];
        int num=t-is;
        root->left=buildin(inorder,is,t-1,postorder,ps,ps+num-1,mp);
        root->right=buildin(inorder,t+1,ie,postorder,ps+num,pe-1,mp);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>mp;
        int i,j,k,l,m,t=0;
        for(i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return buildin(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        
    }
};