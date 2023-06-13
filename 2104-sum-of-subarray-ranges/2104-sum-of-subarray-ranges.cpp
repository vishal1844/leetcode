class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0,i,j,k,t=0;
        for(i=0;i<nums.size();i++){
            int mini=nums[i];
            int maxi=nums[i];
            for(j=i+1;j<nums.size();j++){
                mini=min(mini,nums[j]);
                maxi=max(maxi,nums[j]);
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};