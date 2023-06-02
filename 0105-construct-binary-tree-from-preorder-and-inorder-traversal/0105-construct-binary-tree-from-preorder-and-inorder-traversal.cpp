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
    TreeNode*buildTreeprein(int ps,int is,int pe,int ie,vector<int>&pre,vector<int>&in,map<int,int>&mp){
        if(is>ie||ps>pe)return NULL;
        TreeNode*root=new TreeNode(pre[ps]);
        int ind=mp[pre[ps]];
        int numsLeft=ind-is;
        root->left=buildTreeprein(ps+1,is,ps+numsLeft,is+ind-1,pre,in,mp);
        root->right=buildTreeprein(ps+numsLeft+1,ind+1,pe,ie,pre,in,mp);
        return root;
        
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int m=preorder.size()-1;
        int n=inorder.size()-1;
        map<int,int>mp;
        for(int i=0;i<=n;i++){
            mp[inorder[i]]=i;
        }
        return buildTreeprein(0,0,m,n,preorder,inorder,mp);
    }
};