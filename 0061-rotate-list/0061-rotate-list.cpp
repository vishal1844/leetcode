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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return head;
        vector<int>v;
        ListNode*temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        k%=v.size();
        int n=v.size()-k;
        temp=head;
        for(int i=n;i<v.size();i++){
            temp->val=v[i];
            temp=temp->next;
        }
        for(int i=0;i<n;i++){
            temp->val=v[i];
            temp=temp->next;
        }
        return head;
    }
};