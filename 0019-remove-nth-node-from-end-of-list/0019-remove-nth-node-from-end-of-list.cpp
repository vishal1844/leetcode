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
        int i=0,j,c=1,t;
        ListNode*temp=head;
        ListNode*tail=head;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        j=i-n;
        //cout<<j<<"  ";
        if(j==0){
            ListNode*k=head;
            head=head->next;
            delete(k);
            // cout<<j<<"  ";
            return head;
        }
        else{
            while(c<j){
                tail=tail->next;
                c++;
                //temp=temp->next;
            }
            ListNode*l=tail->next;
            tail->next=tail->next->next;
            delete(l);
        }
        return head;
    }
};