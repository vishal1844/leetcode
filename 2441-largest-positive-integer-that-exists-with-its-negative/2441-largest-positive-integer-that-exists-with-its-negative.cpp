class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        int i,j,k,m,t,s;
        sort(nums.begin(),nums.end());
       int l=0;
        int r=n-1;
        while(l<r){
            if(nums[l]==(-1*nums[r]))
                return (nums[r]);
            else if(nums[l]<(-1*nums[r]))
                l=l+1;
            else
                r=r-1;
        }
        return -1;
    }
};