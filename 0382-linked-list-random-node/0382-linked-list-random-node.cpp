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
    ListNode*temp;
public:
    Solution(ListNode* head) {
        temp=head;
    }
    
    int getRandom() {
        int i=1,ans=0;
        ListNode*p=temp;
        while(p){
            if(rand()%i==0)ans=p->val;
            i++;
            p=p->next;
        }
        return ans;
    }
};



