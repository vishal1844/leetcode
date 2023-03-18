class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,j,k,l,m,t=0,maxi=INT_MIN;
        for(i=0;i<nums.size();i++){
            t+=nums[i];
            maxi=max(maxi,t);
            if(t<0){
                t=0;
            }
        }
        return maxi;
    }
};