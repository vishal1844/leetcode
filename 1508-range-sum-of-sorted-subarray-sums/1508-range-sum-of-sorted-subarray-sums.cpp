class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int i,j,k,l,m,t=0;
        int mod=1e9+7;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        for(i=1;i<=right;i++){
            auto itr=pq.top();
            pq.pop();
            if(i>=left){
                t=(t+itr.first)%mod;
            }
            if(itr.second<n-1){
                pq.push({itr.first+nums[itr.second+1],itr.second+1});
            }
        }
        return t;
    }
};