/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        Node*cur=root;
        if(root==NULL)return cur;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size-1;i++){
                auto itr=q.front();
                q.pop();
                if(itr->left)q.push(itr->left);
                if(itr->right)q.push(itr->right);
                itr->next=q.front();
            }
            auto itr=q.front();
            q.pop();
            itr->next=NULL;
            if(itr->left)q.push(itr->left);
            if(itr->right)q.push(itr->right);
            
        }
        return root;
    }
};