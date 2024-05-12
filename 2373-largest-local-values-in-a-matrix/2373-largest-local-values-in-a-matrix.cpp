class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j,k,l,t=0;
        vector<vector<int>>v(n-2,vector<int>(n-2,0));
        for(i=0;i<n-2;i++){
            for(j=0;j<n-2;j++){
                t=0;
                for(k=i;k<i+3;k++){
                    for(l=j;l<j+3;l++){
                        t=max(t,grid[k][l]);
                    }
                }
                v[i][j]=t;
            }
        }
        return v;
    }
};