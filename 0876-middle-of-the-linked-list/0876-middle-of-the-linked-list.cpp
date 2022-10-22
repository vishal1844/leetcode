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
    ListNode* middleNode(ListNode* head) {
        ListNode*tail=head;
        int i,j,c=0,s=0;
        while(tail!=NULL){
            tail=tail->next;
            c++;
        }
        i=(c/2)+1;
        while(s<i-1){
            head=head->next;
            s++;
        }
        return head;
    }
};