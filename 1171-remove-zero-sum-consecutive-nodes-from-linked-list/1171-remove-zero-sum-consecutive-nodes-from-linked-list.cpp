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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode*front=new ListNode(0,head);
        ListNode*curr=front;
        int preSum=0;
        unordered_map<int,ListNode*>mp;
        mp[0]=new ListNode(0);
        while(curr!=NULL){
            preSum+=curr->val;
            mp[preSum]=curr;
            curr=curr->next;
        }
        preSum=0;
        curr=front;
        while(curr!=NULL){
            preSum+=curr->val;
            curr->next=mp[preSum]->next;
            curr=curr->next;
        }
        return front->next;
    }
};