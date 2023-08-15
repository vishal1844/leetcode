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
    ListNode* partition(ListNode* head, int x) {
        ListNode*temp=new ListNode(0);
        ListNode*tail=new ListNode(0);
        ListNode*p=tail;
        ListNode*t=temp;
        while(head!=NULL){
            if(head->val<x){
                temp->next=new ListNode(head->val);
                temp=temp->next;
            }
            else{
                tail->next=new ListNode(head->val);
                tail=tail->next;
            }
            head=head->next;
        }
        temp->next=p->next;
        return t->next;
    }
};