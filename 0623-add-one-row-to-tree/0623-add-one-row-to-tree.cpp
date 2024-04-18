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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        TreeNode*temp=root;
        int i,j,k,l,t=0;
        if(depth==1){
            temp=new TreeNode(val);
            temp->left=root;
            temp->right=NULL;
            return temp;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            if(depth>2){
                for(i=0;i<n;i++){
                    TreeNode* itr=q.front();
                    q.pop();
                    if(itr->left){
                        q.push(itr->left);
                    }
                    if(itr->right){
                        q.push(itr->right);
                    }
                }
                depth--;
            }
            else{
                for(i=0;i<n;i++){
                    TreeNode*itr=q.front();
                    q.pop();
                    TreeNode*l=itr->left;
                    TreeNode*r=itr->right;
                    //if(l){
                        temp=new TreeNode(val);
                        itr->left=temp;
                        temp->left=l;
                   // }
                    //if(r){
                        temp=new TreeNode(val);
                        itr->right=temp;
                        temp->right=r;
                    //}
                }
                break;
            }
        }
        return root;
    }
};