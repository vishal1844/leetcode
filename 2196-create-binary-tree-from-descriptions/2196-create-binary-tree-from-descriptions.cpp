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
    TreeNode* dfs(unordered_map<int,vector<pair<int,bool>>>&parent,int rootVal){
        TreeNode*root=new TreeNode(rootVal);
        for(auto itr:parent[rootVal]){
            if(itr.second==1){
                root->left=dfs(parent,itr.first);
            }
            else{
                root->right=dfs(parent,itr.first);
            }
        }
        return root;
        
    }
public:
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        unordered_map<int,vector<pair<int,bool>>>parentToChild;
        unordered_set<int>child;
        unordered_set<int>allNodes;
        for(auto itr:d){
            int parent=itr[0];
            int childNodes=itr[1];
            bool left=itr[2];
            parentToChild[parent].push_back({childNodes,left});
            allNodes.insert(parent);
            allNodes.insert(childNodes);
            child.insert(childNodes);
        }
        int rootVal=0;
        for(auto itr:allNodes){
            if(!child.count(itr)){
                rootVal=itr;
                break;
            }
        }
        return dfs(parentToChild,rootVal);
    }
};