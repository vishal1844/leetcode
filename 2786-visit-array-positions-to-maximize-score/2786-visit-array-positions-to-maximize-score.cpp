class Solution {
public:
    long long maxScore(vector<int>& nums, int x) {
        int i,j,k,l,m,t=0;
        long long e=INT_MIN;
        long long o=INT_MIN;
        if(nums[0]%2==0)e=nums[0];
        else{
            o=nums[0];
        }
        for(i=1;i<nums.size();i++){
            if(nums[i]%2==0){
                long long p=max(e+nums[i],o+nums[i]-x);
                e=max(e,p);
            }
            else{
                long long p=max(o+nums[i],e+nums[i]-x);
                o=max(o,p);
            }
        }
        return max(e,o);
    }
};