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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*tail,*temp;
        tail=temp=head;
        vector<int>v;
        int i=1;
        while(temp){
            if(i>=left&&i<=right){
                v.push_back(temp->val);
            }
            i++;
            temp=temp->next;
        }
        i=v.size()-1;
        int t=1;
        temp=head;
        while(temp){
            if(t>=left&&t<=right){
                temp->val=v[i--];
            }
            t++;
            temp=temp->next;
        }
        return head;
    }
};