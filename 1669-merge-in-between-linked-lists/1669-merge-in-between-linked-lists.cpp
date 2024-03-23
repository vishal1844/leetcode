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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int to=0;
        ListNode*temp=list1;
        while(to<a-1&&list1!=NULL){
            list1=list1->next;
            to++;
        }
        int k=b-a+1;
        ListNode*t=list1->next;
        list1->next=list2;
        while(list1->next!=NULL){
            list1=list1->next;
        }
        while(k--){
            t=t->next;
        }
        list1->next=t;
        return temp;
    }
};