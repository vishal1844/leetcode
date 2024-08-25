class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int i,j,l,m,t=0;
        for(i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        while(k--){
            auto itr=pq.top();
            pq.pop();
            pq.push({itr.first*mul,itr.second});
        }
        while(!pq.empty()){
            auto itr=pq.top();
            pq.pop();
            nums[itr.second]=itr.first;
        }
        return nums;
    }
};