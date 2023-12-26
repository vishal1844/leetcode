class Solution {
    int mod=1e9+7;
    int dp[31][1002];
    int solve(int n,int k,int target,int count){
        if(target<0)return 0;
        if(count==n){
            if(target==0)return 1;
            return 0;
        }
        if(dp[count][target]!=-1)return dp[count][target]%mod;
        int take=0;
        for(int l=1;l<=k;l++){
            take=(take+solve(n,k,target-l,count+1))%mod;
        }
        return dp[count][target]=take%mod;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        int i,j,l,m,t=0;
        // int mod=1e9+7;
        memset(dp,-1,sizeof(dp));
        return (solve(n,k,target,t))%mod;
    }
};