class Solution {
public:
    int minPathSum(int i,int j,vector<vector<int>> &grid,vector<vector<int>>& dp){
        

        if(i>grid.size()-1 || j>grid[0].size()-1) return INT_MAX;
        
     if(i==grid.size()-1 && j==grid[0].size()-1) return grid[i][j];
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        
        return dp[i][j]=grid[i][j]+min(minPathSum(i+1,j,grid,dp),minPathSum(i,j+1,grid,dp));
        
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size()+1,vector<int>(grid[0].size()+1,-1));
        return minPathSum(0,0,grid,dp);
    }
};