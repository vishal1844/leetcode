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
    int a[4]={0,1,0,-1};
    int b[4]={1,0,-1,0};
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int i=0,j=0,k,l;
        k=0;
        for(;head!=NULL;head=head->next){
            ans[i][j]=head->val;
            int newi=i+a[k];
            int newj=j+b[k];
            if(newi<0||newj<0||newi>=m||newj>=n||ans[newi][newj]!=-1){
                k=(k+1)%4;
            }
            i+=a[k];
            j+=b[k];
        }
        return ans;
    }
};