class Solution {
    int a[4]={1,0,-1,0};
    int b[4]={0,1,0,-1};
    bool check=1;
    void solve(int i,int j,vector<vector<int>>&grid1,vector<vector<int>>&grid2){
        grid1[i][j]=0;
        grid2[i][j]=0;
        for(int k=0;k<4;k++){
            int newi=i+a[k];
            int newj=j+b[k];
            if(newi>=0&&newi<grid1.size()&&newj>=0&&newj<grid1[0].size()&&grid2[newi][newj]==1&&grid1[newi][newj]==1){
                solve(newi,newj,grid1,grid2);
            }
            else if(newi>=0&&newi<grid1.size()&&newj>=0&&newj<grid1[0].size()){
                if(grid1[newi][newj]==0&&grid2[newi][newj]==1)check=0;
            }
        }
        return;
    }
    
    
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid1.size();
        int m=grid1[0].size();
        int i,j,k,l,t=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid2[i][j]==1 && grid1[i][j]==1){
                    check=1;
                    solve(i,j,grid1,grid2);
                        if(check)
                        t++;
                }
            }
        }           
        return t; 
    }
};