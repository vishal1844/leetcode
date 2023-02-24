class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int i,j,k,l,m,t=0,mini=INT_MAX,res=INT_MAX;
        priority_queue<int>pq;
        for(i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                nums[i]*=2;
            }
            mini=min(mini,nums[i]);
            pq.push(nums[i]);
        }
        while(pq.top()%2!=1){
            res=min(res,pq.top()-mini);
            l=pq.top()/2;
            mini=min(mini,l);
            pq.pop();
            pq.push(l);
        }
        return min(res,pq.top()-mini);
        
    }
};