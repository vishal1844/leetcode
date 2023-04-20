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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
        return 0;
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});
        int res=1;
        while(!q.empty())
        {
            auto it=q.front();
            int size=q.size();
            int mini=it.second;
            int first,last;
            for(int i=0;i<size;i++)
            {
                auto temp= q.front();
                int t=temp.second - mini;
                TreeNode* node=temp.first;
                q.pop();
                if(i==0)
                first=t;
                if(i==size-1)
                last=t;
                if(node->left)
                {
                    q.push({node->left,((long long)2*t+1)});
                }
                if(node->right)
                {
                    q.push({node->right,((long long)2*t+2)});
                }
            }
            res=max(res,(last-first+1));
        }
        return res;
    }
};