class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
       int i,j,k,l,m,t=0;
        int n=grid.size();
        m=grid[0].size();
        for(i=0;i<n;i++){
            if(grid[i][0]==0){
                for(j=0;j<m;j++){
                    grid[i][j]=1-grid[i][j];
                }
            }
        }
        for(i=1;i<m;i++){
            t=0;
            for(j=0;j<n;j++){
                if(grid[j][i]==0){
                    t++;
                }
                else{
                    t--;
                }
            }
            if(t>0){
                for(j=0;j<n;j++){
                    grid[j][i]=1-grid[j][i];
                }
            }
        }
        t=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                t+=(grid[i][j]<<(m-j-1));
            }
        }
        return t;
    }
};