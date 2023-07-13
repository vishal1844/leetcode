class Solution {
    int a[4]={0,0,-1,1};
    int b[4]={-1,1,0,0};
    bool dfs(int i,int j,int n,int m,vector<vector<int>>&grid,vector<vector<int>>&visit,int &t){
        //cout<<t<<" ";
        if(i<0||j<0||i>=n||j>=m)return 0;
        if(grid[i][j]==0||visit[i][j])return 1;
        visit[i][j]=1;
        bool flag=1;
        t++;
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            if(!dfs(newi,newj,n,m,grid,visit,t)){
                flag=0;
            }
        }
        return flag;
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int count=0,flag=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1&&!visit[i][j]){
                    int t=0;
                    if(dfs(i,j,n,m,grid,visit,t)){
                        count+=t;
                    }
                }
            }
        }
        return count;
    }
};