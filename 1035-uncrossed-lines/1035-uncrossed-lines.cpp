class Solution {
    int solve(int i,int j,vector<int>&nums1,vector<int>&nums2,vector<vector<int>>&dp){
        if(i==nums1.size()||j==nums2.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(nums1[i]==nums2[j]){
            return dp[i][j]=(1+solve(i+1,j+1,nums1,nums2,dp));
        }
        else{
            return dp[i][j]= max(solve(i+1,j,nums1,nums2,dp),solve(i,j+1,nums1,nums2,dp));
        }
        return 0;
    }
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        // vector<vector<int>>dp(nums1.size()+1,vector<int>(nums2.size()+1,-1));
        // return solve(0,0,nums1,nums2,dp);
        vector<vector<int>>dp(nums1.size()+1,vector<int>(nums2.size()+1,0));
        int i,j,k,l,t=0;
        for(i=1;i<=nums1.size();i++){
            for(j=1;j<=nums2.size();j++){
                if(nums1[i-1]==nums2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[nums1.size()][nums2.size()];
    }
};