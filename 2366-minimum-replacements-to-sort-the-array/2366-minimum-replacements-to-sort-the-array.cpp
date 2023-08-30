class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long i,j,k,l,m,t=0;
        int n=nums.size();
        for(i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]){
                continue;
            }
            k=(nums[i]+nums[i+1]-1)/nums[i+1];
            t+=k-1;
            nums[i]/=k;
        }
        return t;
        
        
    }
};