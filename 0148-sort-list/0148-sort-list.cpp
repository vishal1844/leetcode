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
    ListNode* sortList(ListNode* head) {
        ListNode*temp=head;
        ListNode*tail=new ListNode(0);
        ListNode*t=tail;
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
          //ListNode*r=new ListNode(v[i]);
            t->next=new ListNode(v[i]);
            t=t->next;
        }
        return tail->next;
    }
};