class Solution {
    int a[4]={-1,1,0,0};
    int b[4]={0,0,-1,+1};
    bool dfs(int i,int j,int n,int m,vector<vector<int>>&grid,vector<vector<int>>&visit){
        if(i<0||j<0||i>=n||j>=m)return false;
        if(grid[i][j]==1||visit[i][j]==1)return true;
        visit[i][j]=1;
        bool flag=1;
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            if(!dfs(newi,newj,n,m,grid,visit)){
                flag=0;
            }
        }
        return flag;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j]&&grid[i][j]==0){
                    if(dfs(i,j,n,m,grid,visit))
                    count++;
                }
            }
        }
        return count;
    }
};