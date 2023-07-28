class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        int sum=0,i,j,l,m=0,t=0;
        for(i=0;i<nums.size();i++){
            if(i>=k){
                sum-=nums[i-k];
            }
            //sum+=nums[i];
            nums[i]-=sum;
            sum+=nums[i];
            if(nums[i]<0)return 0;
            //sum+=nums[i];            
        }
        sum-=nums[i-k];
        if(sum==0)return 1;
        return 0;
        if(nums[nums.size()-1]!=0)return 0;
        return 1;
    }
};