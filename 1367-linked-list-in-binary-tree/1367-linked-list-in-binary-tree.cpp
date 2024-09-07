class Solution {
    // Recursive function to match the linked list with the tree path
    bool matchPath(TreeNode* root, ListNode* head) {
        // If we reached the end of the linked list, it's a valid subpath
        if (head == nullptr) return true;
        // If the tree node is null, the path can't continue
        if (root == nullptr) return false;
        // If the current node values don't match, stop this path
        if (root->val != head->val) return false;
        // Try to match the rest of the linked list in either the left or right subtree
        return matchPath(root->left, head->next) || matchPath(root->right, head->next);
    }
    
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        // If root is null, no valid subpath can exist
        if (root == nullptr) return false;
        // Check if the linked list matches the current tree node path or try to start a new match in left or right subtree
        return matchPath(root, head) || isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
