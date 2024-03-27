class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i,j,l,m,t=0;
        j=0;
        l=1;
        for(i=0;i<nums.size();i++){
            l*=nums[i];
            while(j<=i&&l>=k){
                l/=nums[j];
                j++;
            }
            if(j<=i)
            t+=i-j+1;
        }
        return t;
    }
};