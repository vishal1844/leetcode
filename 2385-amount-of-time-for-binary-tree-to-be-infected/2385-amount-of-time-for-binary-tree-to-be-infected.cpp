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
    int timeBinaryTree(map<TreeNode*,TreeNode*>&mp,TreeNode*root,TreeNode*target){
        int time=0;
        queue<TreeNode*>q;
        map<TreeNode*,int>v;
        v[target]=1;
        q.push(target);
        while(!q.empty()){
            int k= q.size();
            int flag=0;
            for(int i=0;i<k;i++){
                TreeNode*node=q.front();
                q.pop();
                if(node->left&&v[node->left]!=1){
                    flag=1;
                    q.push(node->left);
                    v[node->left]=1;
                }
                if(node->right&&v[node->right]!=1){
                    flag=1;
                    q.push(node->right);
                    v[node->right]=1;
                }
                if(mp[node]&&v[mp[node]]!=1){
                    flag=1;
                    v[mp[node]]=1;
                    q.push(mp[node]);
                }
            }
            if(flag)time++;            
        }
        return time;
    }
    TreeNode* bfsToMapParents(TreeNode*root,int start,map<TreeNode*,TreeNode*>&mp){
        queue<TreeNode*>q;
        q.push(root);
        TreeNode*target;
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node->val==start)target=node;
            if(node->left){
                q.push(node->left);
                mp[node->left]=node;
            }
            if(node->right){
                q.push(node->right);
                mp[node->right]=node;
            }
        }
        return target;
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*,TreeNode*>mp;
        TreeNode* target=bfsToMapParents(root,start,mp);
        return timeBinaryTree(mp,root,target);
    }
};