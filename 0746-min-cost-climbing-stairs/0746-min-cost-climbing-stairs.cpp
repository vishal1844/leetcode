class Solution {
    int dp[1001];
    int solve(int i,vector<int>&cost,int n){
        if(i>=n){
           // sum=min(sum,s);
            return 0;
        }
        if(dp[i]!=-1)return dp[i];
       // int take=INT_MAX;
        //int not_take=INT_MAX;
       int take= cost[i]+min(solve(i+1,cost,n),solve(i+2,cost,n));
        return dp[i]=take;
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int i,j,k,l,m,t=0;
        memset(dp,-1,sizeof(dp));
        return min(solve(0,cost,n),solve(1,cost,n));
    }
};