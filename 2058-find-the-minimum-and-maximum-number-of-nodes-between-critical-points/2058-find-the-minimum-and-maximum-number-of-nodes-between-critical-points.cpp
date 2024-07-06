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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        int i,j,k,l,m,t=0;
        ListNode*prev=head;
        head=head->next;
        t=1;
        while(head->next!=NULL){
            if(head->val<prev->val && head->val< head->next->val){
                ans.push_back(t);
            }
            else if(head->val>prev->val && head->val>head->next->val){
                ans.push_back(t);
            }
            t++;
            prev=head;
            head=head->next;
           // prev=prev->next;
        }
        sort(ans.begin(),ans.end());
        k=INT_MAX;
        if(ans.size()<2)return {-1,-1};
        for(i=0;i<ans.size()-1;i++){
            k=min(k,ans[i+1]-ans[i]);
        }
        l=ans[ans.size()-1]-ans[0];
        return {k,l};
        
    }
};