class Solution {
    int a[4]={-1,0,1,0};
    int b[4]={0,1,0,-1};
    int dp[51][51][101];
    int solve(int i,int j,int n,int m,vector<vector<int>>&grid,int health,vector<vector<int>>&visited){
        if(health<=0)return 0;
        if(i==n-1&&j==m-1){
            if(health>0)return 1;
            return 0;
        }
        if(dp[i][j][health]!=-1)return dp[i][j][health];
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            if(newi>=0&&newi<n&&newj>=0&&newj<m&&grid[newi][newj]==0&&!visited[newi][newj]){
                visited[newi][newj]=1;
                if(solve(newi,newj,n,m,grid,health,visited))return dp[newi][newj][health]=1;
                visited[newi][newj]=0;
            }
            else if(newi>=0&&newi<n&&newj>=0&&newj<m&&grid[newi][newj]==1&&!visited[newi][newj]){
                visited[newi][newj]=1;
                if(solve(newi,newj,n,m,grid,health-1,visited))return dp[newi][newj][health]=1;
                visited[newi][newj]=0;
            }
        }
        return  dp[i][j][health]=0;
    }
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j,k,l,t=0;
        vector<vector<int>>visited(n,vector<int>(m,0));
        visited[0][0]=1;
        if(grid[0][0]==1)health--;
        memset(dp,-1,sizeof(dp));
        return solve(0,0,n,m,grid,health,visited);
    }
};