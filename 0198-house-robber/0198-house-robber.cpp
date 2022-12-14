int dp[101];
class Solution { 
    private:
    int solve(int i,vector<int>&nums,int n){
        if(i>=n) return 0;
        int take=0;
        int not_take=0;
        if(dp[i]!=-1) return dp[i];
        take=nums[i]+solve(i+2,nums,n);
        not_take=0+solve(i+1,nums,n);
        return dp[i]=max(take,not_take);
    }
public:
    int rob(vector<int>& nums) {
       int n =nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,nums,n);
    }
};