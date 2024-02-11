int dp[71][71][71];
class Solution {
    int a[3]={-1,0,+1};
    int b[3]={-1,0,+1};
    int solve(int i,int j,int rj,int n,int m,vector<vector<int>>&grid){
        if(i<0||j<0||rj<0||i>=n||j>=m||rj>=m)return 0;
        if(dp[i][j][rj]!=-1)return dp[i][j][rj];
        int t=grid[i][j]+grid[i][rj];
        if(j==rj){
            t-=grid[i][j];
        }
        if(i!=n-1){
            int maxi=0;
        for(int k=0;k<3;k++){
            for(int l=0;l<3;l++){
                int newj=j+a[k];
                int newrj=rj+b[l];
                maxi=max(maxi,solve(i+1,newj,newrj,n,m,grid));
            }
        }
            t+=maxi;
        }
        return dp[i][j][rj]=t;
    }
    
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,m-1,n,m,grid);
    }
};