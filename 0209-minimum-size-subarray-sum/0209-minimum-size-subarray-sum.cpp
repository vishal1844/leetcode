class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,j,k,l,m=INT_MAX,t=0,s=0;
        for(i=0;i<nums.size();i++){
            t+=nums[i];
            nums[i]=t;
        }
        t=0;
        j=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]>=target){
                t=nums[i];
                while(j<nums.size()&&t-nums[j]>=target){
                    j++;
                m=min(m,i-j+1);
                }
                m=min(m,i-j+1);
            }
        }
        if(m==INT_MAX)return 0;
        return m;
    }
};