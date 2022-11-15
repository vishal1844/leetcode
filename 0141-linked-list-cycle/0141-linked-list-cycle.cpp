/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       // ListNode*tail=head->next->next;
        //head=head->next;
        if(head==NULL||head->next==NULL) return false;
        //head=head->next;
        ListNode*tail=head;
        while(tail!=NULL&&tail->next!=NULL){
            head=head->next;
            tail=tail->next->next;
            if(head==tail){
                return true;
            }
        }
        return false;
    }
};