class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,j,k,l,m,t,c=0;
        cout<<grid.size()<<" ";
            int n=grid.size(); 
        //int m=grid[0].size();
        for(i=0;i<n;i++){
            for(j=grid[i].size()-1;j>=0;j--){
                if(grid[i][j]<0){
                    c++;
                    continue;
                }
                else
                    break;
            }
        }
        return c;
    }
        
};