class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int i,j,k,l,m,t=0;
        for(auto itr:nums){
            if(itr==1)t++;
        }
        m=INT_MAX;
        k=0;
        j=0;
        for(i=0;i<n+t;i++){
            if(nums[i%n]==1){
                    k++;
                }
            if(i<t){
                m=min(m,t-k);
            }
            else{
                if(nums[j++]==1){
                    k--;
                }
                m=min(m,t-k);
            }
        }
        return m;
    }
};