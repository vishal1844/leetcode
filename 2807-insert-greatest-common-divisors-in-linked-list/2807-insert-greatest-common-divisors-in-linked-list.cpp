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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        // vector<int>v;
        // int i,j,k,l,m,t=0;
        // ListNode*tail=head;
        // while(head!=NULL){
        //     v.push_back(head->val);
        //     k=head->val;
        //     head=head->next;
        //     if(head!=NULL){
        //     k=__gcd(k,head->val);
        //     v.push_back(k);
        //     v.push_back(head->val);
        //     head=head->next;
        //     }
        // }
        // ListNode*t=new ListNode();
        // for(auto itr:v){
        //     tail->val=itr;
        //     tail=tail->next;
        // }
        // tail=NULL;
        ListNode*r=head;
        if(head==NULL)return r;
        while(head->next!=NULL){
            int val=head->val;
            int v2=0;
            if(head->next){
                v2=head->next->val;
                int res=__gcd(val,v2);
                ListNode*te=new ListNode(res);
                te->next=head->next;
                head->next=te;
            }
            head=head->next->next;
        }
        return r;
    }
};