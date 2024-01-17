class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int j=0,i,k;
        int sum=0;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
                maxi=max(maxi,nums[i]);
            }
        }
        return maxi;
    }
};