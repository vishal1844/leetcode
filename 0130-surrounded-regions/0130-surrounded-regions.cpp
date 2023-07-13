class Solution {
    int a[4]={0,0,-1,1};
    int b[4]={-1,1,0,0};
    bool bfs(int i,int j,int n,int m,vector<vector<char>>&grid,vector<vector<int>>&visit){
        if(i<0||j<0||i>=n||j>=m)return 0;
        if(grid[i][j]=='X'||visit[i][j])return 1;
        bool flag=1;
        grid[i][j]='X';
        visit[i][j]=1;
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            if(!bfs(newi,newj,n,m,grid,visit)){
                flag=0;
                //return 0;
            }
        }
        return flag;
    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
           // vector<vector<char>>grid=board;
            for(int j=0;j<m;j++){
                vector<vector<char>>grid=board;
                if(board[i][j]=='O'&&!visit[i][j]){
                    if(bfs(i,j,n,m,grid,visit)){
                        board=grid;
                    }
                    grid.clear();
                }
            }
        }
    }
};