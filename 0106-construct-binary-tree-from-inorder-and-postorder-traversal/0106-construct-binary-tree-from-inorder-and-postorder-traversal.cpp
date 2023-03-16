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
    TreeNode*buildtreepostin(vector<int>&inorder,int is,int ie,vector<int>&postorder,int ps,int pe,unordered_map<int,int>&mp){
        if(ps>pe||is>ie)return NULL;
        TreeNode*root=new TreeNode(postorder[pe]);
        int inroot=mp[postorder[pe]];
        int numsleft=inroot-is;
        root->left=buildtreepostin(inorder,is,inroot-1,postorder,ps,ps+numsleft-1,mp);
        root->right=buildtreepostin(inorder,inroot+1,ie,postorder,ps+numsleft,pe-1,mp);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i,j,k,l,m,t=0;
        unordered_map<int,int>mp;
        if(inorder.size()!=postorder.size())return NULL;
        for(i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return buildtreepostin(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        
    }
};