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
    ListNode*reverselist(ListNode*head){
        ListNode*prev=NULL;
        ListNode*tail=head;
        while(tail){
            ListNode*temp=tail->next;
            tail->next=prev;
            prev=tail;
            tail=temp;
        }
        return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*r1=reverselist(l1);
        ListNode*r2=reverselist(l2);
        ListNode*ans=new ListNode();
        int sum=0,carry=0;
        while(r1||r2){
            if(r1){
                sum+=r1->val;
                r1=r1->next;
            }
            if(r2){
                sum+=r2->val;
                r2=r2->next;
            }
            ans->val=sum%10;
            carry=sum/10;
            ListNode*head=new ListNode(carry);
            head->next=ans;
            ans=head;
            sum=carry;
        }
        return carry==0?ans->next:ans;
        
    }
};