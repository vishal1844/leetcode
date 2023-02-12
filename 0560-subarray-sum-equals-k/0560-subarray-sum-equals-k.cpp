class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i,j,l,m,t=0,sum=0;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k){
                t++;
            }
            if(mp.find(sum-k)!=mp.end()){
                t+=mp[sum-k];
            }
            mp[sum]++;
        }
        return t;
    }
};