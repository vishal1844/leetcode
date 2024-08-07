class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j,k,l,t=0;
        k=0;
        for(i=0;i<n;i++){
            l=0;
            int h=m-1;
            while(l<=h){
                if(grid[i][l]!=grid[i][h])t++;
                l++;
                h--;
            }
        }
        for(i=0;i<m;i++){
            l=0;
            int r=n-1;
            while(l<r){
                if(grid[l][i]!=grid[r][i])k++;
                l++;
                r--;
            }
        }
        return min(k,t);
    }
};