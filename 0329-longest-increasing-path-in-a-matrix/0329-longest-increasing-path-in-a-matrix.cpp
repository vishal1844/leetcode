class Solution {
    int solve(vector<vector<int>>&matrix,vector<vector<int>>&dp,int i,int j,int n,int m,int prev){
        if(i<0||j>m-1||j<0||i>n-1||matrix[i][j]<=prev){
            return 0;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        int count=1;
        // if(i+1<n&&matrix[i+1][j]>matrix[i][j]){
        //     count=max(count,1+solve(matrix,dp,i+1,j,n,m));
        // }
        // if(j+1<m&&matrix[i][j+1]>matrix[i][j]){
        //     count=max(count,1+solve(matrix,dp,i,j+1,n,m));
        // }
        // if(i-1>=0&&matrix[i-1][j]>matrix[i][j]){
        //     count=max(count,1+solve(matrix,dp,i-1,j,n,m));
        // }
        // if(j-1>=0&&matrix[i][j-1]>matrix[i][j]){
        //     count=max(count,1+solve(matrix,dp,i,j-1,n,m));
        // }
        // return dp[i][j]=count;
        int l=solve(matrix,dp,i+1,j,n,m,matrix[i][j]);
        int r=solve(matrix,dp,i-1,j,n,m,matrix[i][j]);
        int s=solve(matrix,dp,i,j+1,n,m,matrix[i][j]);
        int t=solve(matrix,dp,i,j-1,n,m,matrix[i][j]);
        dp[i][j]=max({l,r,s,t})+1;
        return dp[i][j];
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int i,j,k,l,t=0;
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                t=max(t,solve(matrix,dp,i,j,n,m,-1));
            }
        }
        return t;
    }
};