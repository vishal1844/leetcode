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
        ListNode*p=new ListNode();
        //p=p->next;
        ListNode*temp=p;
        int i,j,k,l,m,t=0;
        head=head->next;
        while(head!=NULL){
            if(head->val==0){
                p->next=new ListNode(t);
                p=p->next;
                t=0;
            }
            else{
                t+=head->val;
            }
            head=head->next;
        }
        return temp->next;
    }
};