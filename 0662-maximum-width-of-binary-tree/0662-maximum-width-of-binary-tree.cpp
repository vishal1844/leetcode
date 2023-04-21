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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int i,j,k,l,m,t=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int mini=q.front().second;
            int first,last;
            int size=q.size();
            for(i=0;i<size;i++){
                int cur_id=q.front().second-mini;
                TreeNode*node=q.front().first;
                q.pop();
                if(i==0)first=cur_id;
                if(i==size-1)last=cur_id;
                if(node->left){
                    q.push({node->left,1ll*2*cur_id+1});
                }
                if(node->right)q.push({node->right,1ll*2*cur_id+2});
            }
            t=max(t,last-first+1);
        }
        return t;
    }
};