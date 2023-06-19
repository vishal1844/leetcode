class Solution {
    int solve(int i,int j,int n,vector<vector<int>>&v,vector<vector<int>>&dp){
        if(i>=n){
            return 0;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        
        return dp[i][j]=min(v[i][j]+solve(i+1,j,n,v,dp),v[i][j]+solve(i+1,j+1,n,v,dp));
    }
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n=tri.size();
        int sum=INT_MAX;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int t=0;
        return solve(0,0,n,tri,dp);
    }
};