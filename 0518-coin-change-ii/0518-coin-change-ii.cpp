class Solution {
    int dp[301][5001];
    int t=0;
    int solve(int i,int n,vector<int>&coins,int sum){
        if(sum==0){
            //t++;
            return 1;
        }
        if(sum<0)return 0;
        if(dp[i][sum]!=-1)return dp[i][sum];
       // if(sum<0)return 0;
        int ans=0;
        for(int k=i;k<n;k++){
            ans=ans+solve(k,n,coins,sum-coins[k]);
        }
        return dp[i][sum]=ans;
        
    }
public:
    int change(int amount, vector<int>& coins) {
        sort(coins.begin(),coins.end());
        memset(dp,-1,sizeof(dp));
       return solve(0,coins.size(),coins,amount);
        //return t;
        
    }
};