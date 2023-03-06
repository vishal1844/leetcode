class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long int i,j,k=0,l=0,m=0,t=0;
        bool s=0,p=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]<minK||nums[i]>maxK){
                k=i+1;
                s=0;
                p=0;
            }
            if(nums[i]==minK){
                l=i;
                s=1;
            }
            if(nums[i]==maxK){
                m=i;
                p=1;
            }
            if(s&&p){
                t+=(min(l,m)-k+1);
            }
        }
        return t;
    }
};