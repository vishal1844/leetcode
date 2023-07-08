class Solution {
    int a[4]={0,-1,0,+1};
    int b[4]={-1,0,+1,0};
    void bfs(int i,int j,int n,int m,vector<vector<int>>&visit,vector<vector<char>>&grid){
        visit[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            auto itr=q.front();
            q.pop();
            int ni=itr.first;
            int nc=itr.second;
            for(int k=0;k<4;k++){
                int p=ni+a[k];
                int r=nc+b[k];
                if(p>=0&&p<n&&r>=0&&r<m&&!visit[p][r]&&grid[p][r]=='1'){
                    visit[p][r]=1;
                    q.push({p,r});
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j]&&grid[i][j]=='1'){
                    cnt++;
                    bfs(i,j,n,m,visit,grid);
                }
            }
        }
        return cnt;
    }
};