class Solution {
public:
    int arraySign(vector<int>& nums) {
        int i,j,l,t=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0)return 0;
            if(nums[i]<0)t++;
        }
        if(t%2==0)return 1;
        return -1;
    }
};