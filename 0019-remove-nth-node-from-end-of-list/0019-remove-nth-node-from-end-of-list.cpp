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
        ListNode*slow=head;
        ListNode*fast=head;
        int i,j,k,l,m;
        i=0;
        while(i<n){
            fast=fast->next;
            i++;
        }
        if(fast==NULL) return head=head->next;
        else{
            while(fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            ListNode*temp=slow->next;
            slow->next=slow->next->next;
            delete(temp);
            //return head;
        }
        return head;
    }
};