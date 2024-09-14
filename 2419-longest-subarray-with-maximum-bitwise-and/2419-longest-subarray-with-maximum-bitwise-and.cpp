class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i,j,k=0,l=0,m,t=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]>k){
                k=nums[i];
                l=1;
                t=0;
            }
            else if(k==nums[i]){
                l++;
            }
            else{
                l=0;
            }
            t=max(t,l);
        }
        return t;
    }
};