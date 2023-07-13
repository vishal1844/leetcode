class Solution {
    int a[4]={0,0,1,-1};
    int b[4]={1,-1,0,0};
    void bfs(int i,int j,int n,int m,vector<vector<char>>&grid,vector<vector<int>>&visit){
        if(i<0||j<0||i>=n||j>=m)return;
        if(grid[i][j]=='X'||visit[i][j])return;
        grid[i][j]='Z';
        visit[i][j]=1;
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            bfs(newi,newj,n,m,grid,visit);
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>visit(n,vector<int>(m));
        vector<vector<char>>grid=board;
        for(int i=0;i<n;i++){
            if(grid[i][0]=='O'&&!visit[i][0]){
                bfs(i,0,n,m,grid,visit);
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][m-1]=='O'&&!visit[i][m-1]){
                bfs(i,m-1,n,m,grid,visit);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[n-1][i]=='O'&&!visit[n-1][i]){
                bfs(n-1,i,n,m,grid,visit);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]=='O'&&!visit[0][i]){
                bfs(0,i,n,m,grid,visit);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!='Z'){
                    board[i][j]='X';
                }
            }
        }
    }
};