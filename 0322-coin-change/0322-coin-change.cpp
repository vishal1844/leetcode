int dp[14][10001];
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
        memset(dp,-1,sizeof(dp));
        int t=solve(0,coins.size(),coins,amt);
        if(t==INT_MAX-1)return -1;
        return t;
    }
};