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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        ListNode*temp;
        ListNode*tail;
        int i,j,k,l,m,t=0;
        for(i=0;i<lists.size();i++){
            temp=lists[i];
            while(temp!=NULL){
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode*p=new ListNode(0);
        tail=p;
        for(i=0;i<v.size();i++){
            ListNode*t=new ListNode(v[i]);
            tail->next=t;
            //temp->val=v[i];
           tail=tail->next;
            //temp=temp->next;
        }
        return p->next;
        
    }
};