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
    ListNode* mergeNodes(ListNode* head) {
    ListNode*left=head;
    ListNode*right=head;
    int sum=0;
    while(right!=NULL){
       
        if(right->val==0 && right!=left){
            left->val=sum;
            if(right->next==NULL)
                left->next=NULL;
            else
                left->next=right;
            left=right;
            sum=0;
        }  
        sum+=right->val;
        right=right->next;
    }
        return head;
    }
};