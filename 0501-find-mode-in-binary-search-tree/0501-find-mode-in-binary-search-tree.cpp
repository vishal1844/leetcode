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
    void solve(TreeNode*root,map<int,int>&mp,int&t){
        if(root==NULL){
            return ;
        }
        mp[root->val]++;
        cout<<mp[root->val];
        t=max(t,mp[root->val]);
        if(root->left){
            solve(root->left,mp,t);
        }
        if(root->right){
            solve(root->right,mp,t);
        }
    }
public:
    vector<int> findMode(TreeNode* root) {
        vector<int>v;
        map<int,int>mp;
        int t=0;
        solve(root,mp,t);
        cout<<t<<" ";
        for(auto itr:mp){
            if(itr.second==t){
                v.push_back(itr.first);
            }
        }
        return v;
    }
};