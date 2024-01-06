int dp[13][10001];
class Solution {
    int solve(int i,int n,vector<int>&coins,int amt){
        if(amt==0)return 0;
        if(i>=n||amt<0){
            return INT_MAX-1;
        }
        if(dp[i][amt]!=-1)return dp[i][amt];
        int take=INT_MAX,not_take=INT_MAX;
        if(coins[i]<=amt){
            take=1+solve(i,n,coins,amt-coins[i]);
        }
        not_take=solve(i+1,n,coins,amt);
        return dp[i][amt]=min(take,not_take);
    }
public:
    int coinChange(vector<int>& coins, int amt) {
        // memset(dp,-1,sizeof(dp));
        // int t=solve(0,coins.size(),coins,amt);
        // if(t==INT_MAX-1)return -1;
        //return t;
        vector<vector<int>>dp(coins.size()+1,vector<int>(amt+1,1e9-1));
        int i,j;
        for(i=0;i<coins.size()+1;i++){
            dp[i][0]=0;
        }
        for(i=1;i<coins.size()+1;i++){
            for(j=1;j<amt+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if(dp[coins.size()][amt]==1e9-1)return -1;
        return dp[coins.size()][amt];
        
    }
};