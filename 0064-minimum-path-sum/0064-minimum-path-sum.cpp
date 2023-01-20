int dp[205][205];
class Solution {
    int minsum(vector<vector<int>>&grid,int i,int j){
        if(i<0||j<0){
            return  1e9;
        }
         if(i==0&&j==0){
            return grid[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int mini=INT_MAX;
        int a=grid[i][j]+minsum(grid,i-1,j);
        int b=grid[i][j]+ minsum(grid,i,j-1);
        return dp[i][j]=min(a,b);        
    }
public:
    int minPathSum(vector<vector<int>>& grid) { 
        memset(dp,-1,sizeof(dp));
        return minsum(grid,grid.size()-1,grid[0].size()-1);
    }
};