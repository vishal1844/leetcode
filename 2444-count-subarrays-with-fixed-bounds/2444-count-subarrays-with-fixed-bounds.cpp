class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long i,j=0,k=-1,l=-1,m,t=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==minK){
                k=i;
            }
            if(nums[i]==maxK){
                l=i;
            }
            if(nums[i]<minK||nums[i]>maxK){
                k=-1;
                l=-1;
                j=i+1;
            }
            if(k!=-1&&l!=-1){
                t+=min(k,l)-j+1;
            }
        }
        return t;
    }
};