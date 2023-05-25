class Solution {
    bool solve(int ind,int sum,vector<int>&nums,vector<vector<int>>&dp){
        if(ind>=nums.size()||sum<=0){
        if(sum==0){
            return true;
        }
        return false;
        }
        if(sum==0){
            return true;
        }
        if(dp[ind][sum]!=-1){
            return dp[ind][sum];
        }
        // // for(int i=ind;i<nums.size();i++){
        //     if(sum<nums[i])return false;
            return dp[ind][sum]= solve(ind+1,sum-nums[ind],nums,dp)||solve(ind+1,sum,nums,dp);
            
       // }
        return false;
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2==1){
            return false;
        }
        sum=sum/2;
      vector<vector<int>>dp(200,vector<int>(20001,-1));
        return solve(0,sum,nums,dp);
        
    }
};