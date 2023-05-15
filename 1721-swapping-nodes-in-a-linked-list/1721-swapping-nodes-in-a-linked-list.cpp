/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*tail=head;
        vector<int>v;
        while(tail!=NULL){
            v.push_back(tail->val);
            tail=tail->next;
        }
        int i=v[k-1];
        v[k-1]=v[v.size()-k];
        v[v.size()-k]=i;
        tail=head;
        i=0;
        while(tail!=NULL){
            tail->val=v[i++];
            tail=tail->next;
        }
        return head;
    }
};