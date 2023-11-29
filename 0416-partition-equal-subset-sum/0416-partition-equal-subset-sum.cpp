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
      // vector<vector<int>>dp(200,vector<int>(20001,-1));
      //   return solve(0,sum,nums,dp);
        int n=nums.size();
        int k=sum+1;
        int l=n+1;
        int i,j;
        vector<vector<int>>dp(l,vector<int>(k));
        for(i=0;i<n+1;i++){
            dp[i][0]=1;
        }
        for(i=0;i<sum+1;i++){
            dp[0][i]=0;
        }
        for(i=1;i<n+1;i++){
            for(j=1;j<sum+1;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};