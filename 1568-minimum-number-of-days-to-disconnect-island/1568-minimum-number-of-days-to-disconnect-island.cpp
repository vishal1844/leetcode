class Solution {
    int a[4]={1,0,-1,0};
    int b[4]={0,-1,0,1};
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>&grid){
        vis[i][j]=1;
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            if(newi>=0&&newi<grid.size()&&newj>=0&&newj<grid[0].size()&&!vis[newi][newj]&&grid[newi][newj]==1){
                dfs(newi,newj,vis,grid);
            }
        }
    }
    int countIsland(vector<vector<int>>&grid){
          int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int i,j,k,l,t=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(!vis[i][j]&&grid[i][j]==1){
                    t++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return t;
    }
public:
    int minDays(vector<vector<int>>& grid) {
        int t=countIsland(grid);
        int i,j,k,l;
        int n=grid.size();
        int m=grid[0].size();
        if(t>1|| t==0)return 0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]==1){
                    grid[i][j]=0;
                    t=countIsland(grid);
                    if(t>1||t==0)return 1;
                    grid[i][j]=1;
                }
            }
        }
        return 2;
    }
};