class Solution {
    int solve(int ind,int n,vector<int>&nums,int target,int sum){
        if(ind==n){
            if(sum==target){
                return 1;
            }
            return 0;
        }
        return(solve(ind+1,n,nums,target,sum+nums[ind])+solve(ind+1,n,nums,target,sum-nums[ind]));
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(0,nums.size(),nums,target,0);
    }
};