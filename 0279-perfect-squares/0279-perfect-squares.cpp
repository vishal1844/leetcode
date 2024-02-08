int dp[10001];
class Solution {
    int solve(int sum){
        if(sum==0)return 0;
        if(dp[sum]!=-1)return dp[sum];
        int t=INT_MAX;
        for(int i=1;i*i<=sum;i++){
            t=min(t,1+solve(sum-(i*i)));
        }
        return dp[sum]=t;
    }
public:
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};