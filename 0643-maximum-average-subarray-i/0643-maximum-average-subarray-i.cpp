class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,nums_sum=0;
        int i,j;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i==k-1) nums_sum=sum;
            else if(i>=k){
                sum-=nums[i-k];
                nums_sum=max(nums_sum,sum);
            }
        }
        return nums_sum/k;
    }
};