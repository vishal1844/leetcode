class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,numSubarray=0;
        for(auto itr:nums){
            if(itr==0){
                numSubarray++;
            }
            else{
                numSubarray=0;
            }
            ans+=numSubarray;
        }
        return ans;
    }
};