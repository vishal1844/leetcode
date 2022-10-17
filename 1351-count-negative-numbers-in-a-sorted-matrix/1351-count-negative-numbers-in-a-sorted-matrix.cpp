class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j,k,l,t,s,c=0;
        i=n-1;
        j=0;
        while(i>=0&&j<=m-1){
            if(grid[i][j]<0){
                c+=m-j;
                i--;
            }
            else
                j++;
        }
        //cout<<c<<endl;
        return c;
    }
};