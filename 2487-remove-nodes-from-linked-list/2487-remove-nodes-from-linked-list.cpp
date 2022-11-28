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
    ListNode* removeNodes(ListNode* head) {
        ListNode*temp=head;
        stack<int>st;
        while(temp!=NULL){
            while(!st.empty()&&st.top()<temp->val){
                st.pop();
            }
            st.push(temp->val);
            temp=temp->next;
        }
        vector<int>ds;
        while(!st.empty()){
            ds.push_back(st.top());
            st.pop();
        }
        reverse(ds.begin(),ds.end());
        temp=head;
        ListNode*prev;
        for(auto itr:ds){
           // cout<<itr<<" ";
            temp->val=itr;
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        return head;
    }
};