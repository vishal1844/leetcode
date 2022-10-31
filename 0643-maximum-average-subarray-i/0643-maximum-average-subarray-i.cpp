class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s=0,sum=0,i;
        for(i=0;i<k;i++){
            sum+=nums[i];
        }
        s=sum;
        for(;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            s=max(s,sum);            
        }
        return double(s)/k;
    }
};