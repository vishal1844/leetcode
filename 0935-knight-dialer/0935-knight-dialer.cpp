class Solution {
    int dp[5001][11];
    int solve(int n,int k,vector<vector<int>>&adj){
        if(n==0)return 1;
        if(dp[n][k]!=-1)return dp[n][k];
        int t=0;
        int mod=1e9+7;
        for(auto& itr:adj[k]){
            t=(t%mod+solve(n-1,itr,adj)%mod)%mod;
        }
        return dp[n][k]=t%mod; 
    }
public:
    int knightDialer(int n) {
       vector<vector<int>>adj={
           {4,6},
           {6,8},
           {7,9},
           {4,8},
           {0,3,9},
           {},
           {0,1,7},
           {2,6},
           {1,3},
           {2,4}};
        int t=0;
        memset(dp,-1,sizeof(dp));
        int mod=1e9+7;
        for(int i=0;i<=9;i++){
            t=(t+solve(n-1,i,adj))%mod;
        }
        return t;
    }
};