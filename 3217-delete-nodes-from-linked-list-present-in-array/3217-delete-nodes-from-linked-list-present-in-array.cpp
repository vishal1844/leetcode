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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>st(nums.begin(),nums.end());
        ListNode*temp=new ListNode();
        ListNode*ans=temp;
        while(head!=NULL){
            if(!st.count(head->val)){
                temp->next=new ListNode(head->val);
                temp=temp->next;
            }
            head=head->next;
        }
        return ans->next;
    }
};