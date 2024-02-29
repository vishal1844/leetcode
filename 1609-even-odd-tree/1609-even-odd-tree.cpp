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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL)return 1;
        q.push(root);
        int l=-1;
        while(!q.empty()){
            int size=q.size();
            int k=0;
            l++;
            for(int i=0;i<size;i++){
                auto itr=q.front();
                q.pop();
                //cout<<itr->val<<" ";
                if(i==0){
                    k=itr->val;
                    if(l%2==1){
                        if(k%2==1){
                            return 0;
                        }
                    }
                    if(l%2==0){
                        if(k%2==0)return 0;
                    }
                }
                else{
                    if(k%2==0&&itr->val%2==0&&k>itr->val){
                        k=itr->val;
                    }
                     else if(k%2==1&&itr->val%2==1&&k<itr->val){
                        k=itr->val;
                    }
                    else{
                        return 0;
                    }
                    
                }
                if(itr->left){
                    q.push(itr->left);
                }
                if(itr->right){
                    q.push(itr->right);
                }
            }
        }
        return 1;
    }
};