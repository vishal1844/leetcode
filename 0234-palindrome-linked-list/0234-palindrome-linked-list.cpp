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
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*prev,*temp;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        prev=slow;
        slow=slow->next;
        prev->next=NULL;
        while(slow){
            temp=slow;
            slow=slow->next;
            temp->next=prev;
            prev=temp;
        }
        ListNode*right=head;
        slow=prev;
        while(right!=NULL&&slow!=NULL){
            if(right->val!=slow->val)return 0;
            right=right->next;
            slow=slow->next;
        }
        return 1;
        // prev=slow,slow=slow->next,prev->next=NULL;
        // while(slow){
        //     temp=slow->next;
        //     slow->next=prev;
        //     prev=slow;
        //     slow=temp;
        // }
        // fast=head;
        // slow=prev;
        // while(slow){
        //     if(slow->val!=fast->val)return 0;
        //     slow=slow->next;
        //     fast=fast->next;
        // }
        // return 1;
    }
};