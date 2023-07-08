class Solution {
    int a[4]={0,-1,+1,0};
    int b[4]={-1,0,0,+1};
    void dfs(int i,int j,vector<vector<int>>&visit,vector<vector<char>>&grid){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size())return;
        visit[i][j]=1;
        for(int k=0;k<4;k++){
            int newi=i+a[k];
            int newj=j+b[k];
            if(newi<0||newj<0||newi>=grid.size()||newj>=grid[0].size())continue;
            if(!visit[newi][newj]&&grid[newi][newj]=='1'){
                dfs(newi,newj,visit,grid);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j]&&grid[i][j]=='1'){
                    count++;
                    dfs(i,j,visit,grid);
                }
            }
        }
        return count;
    }
};