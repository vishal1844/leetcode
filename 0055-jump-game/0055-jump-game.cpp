class Solution {
public:
    bool canJump(vector<int>& nums) {
       int maxi=nums[0];
        int i,j,k,l;
        for(i=0;i<nums.size()-1;i++){
            if(maxi==0)return 0;
            maxi=max(maxi-1,nums[i+1]);
        }
        return 1;
    }
};