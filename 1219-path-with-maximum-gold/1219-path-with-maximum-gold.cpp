class Solution {
    int a[4]={-1,1,0,0};
    int b[4]={0,0,-1,1};
    int solve(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&visit){
        int t=grid[i][j];
        visit[i][j]=1;
        int l=0;
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            if(newi>=0&&newj>=0&&newi<grid.size()&&newj<grid[0].size()&&!visit[newi][newj]&&grid[newi][newj]!=0){
                t=max(t,grid[i][j]+solve(newi,newj,grid,visit));
            }
        }
        visit[i][j]=0;
        return t;
        
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j,k,l,t=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]!=0){
                   // visit[i][j]=1;
                    vector<vector<int>>visit(n,vector<int>(m,0));
                    t=max(t,solve(i,j,grid,visit));
                }
            }
        }
        return t;
    }
};