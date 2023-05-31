class Solution {
    int solve(int i,int j,int m,int n,vector<vector<int>>&nums,vector<vector<int>>&visit,vector<vector<int>>&dp){
        if(i>=m||j>=n||i<0||j<0||visit[i][j]!=-1){
            return 0;
        }
        if(i==m-1&&j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        int k,l;
        visit[i][j]=1;
        k=solve(i,j+1,m,n,nums,visit,dp);
        l=solve(i+1,j,m,n,nums,visit,dp);
        visit[i][j]=-1;
        return dp[i][j]=k+l;
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>visit(m+1,vector<int>(n+1,-1));
        vector<vector<int>>nums(m,vector<int>(n,0));
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(0,0,m,n,nums,visit,dp);
    }
};