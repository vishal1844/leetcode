class Solution {
       int sums(vector<int>nums,int n){
        int i,j,k,l,r,s=0;
        if(n==1){
            return nums[0] ;
        }
        for(i=0;i<n-1;i++){
            r=nums[i]+nums[i+1];
            nums[i]=r%10;
        }
        return sums(nums,n-1);
    }
public:
    int triangularSum(vector<int>& nums) {
        int i,j,k,l,m,t;
        t=sums(nums,nums.size());
        return t;
    }
};