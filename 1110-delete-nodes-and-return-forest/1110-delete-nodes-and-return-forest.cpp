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
    vector<TreeNode*> ans;
    
    TreeNode* solve(set<int>& st, TreeNode* root) {
        if (!root) return nullptr;

        root->left = solve(st, root->left);
        root->right = solve(st, root->right);
        
        if (st.count(root->val)) {
            if (root->left) {
                ans.push_back(root->left);
            }
            if (root->right) {
                ans.push_back(root->right);
            }
            return nullptr;
        }
        
        return root;
    }
    
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        set<int> st(to_delete.begin(), to_delete.end());
        if (solve(st, root)) {
            ans.push_back(root);
        }
        return ans;
    }
};