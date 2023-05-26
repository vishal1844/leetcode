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
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>>v;
        vector<int>vec;
        queue<TreeNode*>q;
        if(root==NULL){
            return 0;
        }
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>vec;
            for(int i=0;i<size;i++){
                auto itr=q.front();
                q.pop();
                vec.push_back(itr->val);
                if(itr->left!=NULL){
                    q.push(itr->left);
                }
                if(itr->right!=NULL){
                    q.push(itr->right);
                }
            }
            if(q.empty()){
                int t=0;
                for(auto itr:vec){
                    t+=itr;
                }
                return t;
            }
        }
        return 0;
    }
};