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
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>q;
        while(true){
            if(root!=NULL){
                q.push(root);
                root=root->left;
            }
            else{
                if(q.size()==0)break;
                auto itr=q.top();
                q.pop();
                v.push_back(itr->val);
                //cout<<itr->val;
                root=itr->right;
            }
        }
        // for(auto itr:v){
        //     cout<<itr<<" ";
        // }
        int maxi=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            maxi=min(maxi,abs(v[i]-v[i+1]));
        }
        return maxi;
    }
};