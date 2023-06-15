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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)return 0;
        vector<int>v;
        queue<TreeNode*>q;
        int j=0,k=0,t=INT_MIN,l;
        q.push(root);
       // v.push_back(root->val);
        while(!q.empty()){
            int size=q.size();
            k=0;
            for(int i=0;i<size;i++){
                auto itr=q.front();
                q.pop();
                k+=itr->val;
                if(itr->left){
                    q.push(itr->left);
                }
                if(itr->right){
                    q.push(itr->right);
                }
            }
            if(t<k){
                t=k;
                l=j;
            }
            j++;
            //cout<<k<<" ";
            //v.push_back(k);
        }
        
        return l+1;
    }
};