class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0,m=INT_MAX,k;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                m=min(m,i-j+1);
                sum-=nums[j++];
            }
        }
        if(m==INT_MAX){
            return 0;
        }
        return m;
        
    }
};