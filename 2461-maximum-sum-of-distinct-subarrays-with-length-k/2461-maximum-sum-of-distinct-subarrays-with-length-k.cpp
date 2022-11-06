class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long int i,sum=0,c=0;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            mp[nums[i]]++;
            if(i>=k){
                mp[nums[i-k]]--;
                sum-=nums[i-k];
                if(mp[nums[i-k]]==0){
                    mp.erase(nums[i-k]);
                }
            }
            if(mp.size()==k){
                c=max(c,sum);
            }
        }
        return c;
    }
};
//using sliding window