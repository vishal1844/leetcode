class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    //     int i,j,l,m,t;
    //     unordered_map<int,int>mp;
    //     priority_queue<pair<int,int>>pq;
    //     for(i=0;i<nums.size();i++){
    //         mp[nums[i]]++;
    //     }
    //     for(auto itr:mp){
    //         pq.push({itr.first,itr.second});
    //     }
    //     i=0;
    //     while(!pq.empty()){
    //         i+=pq.top().second;
    //         if(i>=k){
    //             return pq.top().first;
    //         }
    //         pq.pop();
    //     }
    //     return 0;
    // }
    sort(nums.begin(),nums.end());
    return nums[nums.size()-k];
    }
};