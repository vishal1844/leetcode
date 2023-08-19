class Solution {
    int t=INT_MAX;
    int dp[105][4];
    int solve(int i,int prev,int s,vector<int>&nums){
        if(i==nums.size()){
            // t=min(t,s);
            return 0;
        }
        if(dp[i][prev]!=-1)return dp[i][prev];
        int ans=1e9;
        if(nums[i]>=prev){
            ans=solve(i+1,nums[i],s,nums);
        }
        ans=min(ans,1+solve(i+1,prev,s,nums));
        return dp[i][prev]=ans;
    }
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int s=0; 
        memset(dp,-1,sizeof(dp));
        return solve(0,1,s,nums);
        //return t;
        
    }
};