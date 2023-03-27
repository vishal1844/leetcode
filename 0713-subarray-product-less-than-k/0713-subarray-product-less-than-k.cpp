class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i,j,l,m,t=0;
        j=1;
        l=1;
        m=0;
        for(i=0;i<nums.size();i++){
            l*=nums[i];
            while(m<nums.size()&&l>=k){
                l=l/nums[m++];
            }
            if(l<k)
            t+=(i-m+1);
        }
        return t;
        
    }
};