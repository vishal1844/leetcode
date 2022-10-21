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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        ListNode*s=head;
        int i=1;
        if(head->next==NULL){
            return NULL;
        }
        while(i<=n){
            temp=temp->next;
            i++;
        }
        if(!temp){
            return head->next;
        }
        while(temp->next!=NULL){
            temp=temp->next;
            head=head->next;
        }
        // if(head->next==NULL){
        //     head->=NULL;
        // }
        // else{
        ListNode*t=head->next;
        //cout<<head->val;
        //head->val=head->next->val;
        head->next=head->next->next;
        delete(t);
        //}
        return s;
        
        
    }
};