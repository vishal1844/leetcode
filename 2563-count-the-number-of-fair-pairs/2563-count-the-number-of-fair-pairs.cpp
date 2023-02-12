class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long int i,j,k,l,m,h,t=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            l=lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i])-nums.begin();
            h=upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i])-nums.begin();
            t+=(h-l);
        }
        return t;
        
    }
};