class Solution {
    int a[4]={1,0,-1,0};
    int b[4]={0,1,0,-1};
    void dfs(int i,int j,vector<vector<int>>&v,vector<vector<int>>&vis){
        vis[i][j]=1;
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            if(newi>=0&&newi<v.size()&&newj>=0&&newj<v[0].size()&&v[newi][newj]==0&&!vis[newi][newj]){
                dfs(newi,newj,v,vis);
            }
        }
    }
public:
    int regionsBySlashes(vector<string>& grid) {
        int i,j,k,l,m,t=0;
        int n=grid.size();
        m=grid[0].size();
        vector<vector<int>>v(3*n,vector<int>(3*m,0));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]=='/'){
                    v[i*3][j*3+2]=1;
                    v[i*3+1][j*3+1]=1;
                    v[i*3+2][j*3]=1;
                }
                else if(grid[i][j]=='\\'){
                    v[i*3][j*3]=1;
                    v[i*3+1][j*3+1]=1;
                    v[i*3+2][j*3+2]=1;
                }
            }
        }
        vector<vector<int>>vis(v.size(),vector<int>(v[0].size(),0));
        for(i=0;i<v.size();i++){
            for(j=0;j<v[0].size();j++){
                if(!vis[i][j]&&v[i][j]==0){
                    t++;
                    dfs(i,j,v,vis);
                }
            }
        }
        return t;
        
    }
};