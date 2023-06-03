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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            int maxi=INT_MIN;
            for(int i=0;i<size;i++){
                auto itr=q.front();
                maxi=max(maxi,itr->val);
                q.pop();
                if(itr->left){
                    q.push(itr->left);
                }
                if(itr->right)q.push(itr->right);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};