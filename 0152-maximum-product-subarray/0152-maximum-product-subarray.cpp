class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,j,k,l=0,m=nums.size(),t=0,maxi=INT_MIN;
        for(i=0;i<nums.size();i++){
            l=(l?l:1)*nums[i];
            t=(t?t:1)*nums[m-i-1];
            maxi=max(maxi,max(t,l));
        }
        return maxi;
    }
};