#include <vector>
#include <algorithm>
#include <climits> // Include this header for INT_MAX

using namespace std;
int dp[202][202];
class Solution {
    int solve(int i, int j, int n, int m, vector<vector<int>>& grid) {
        if (i < 0 || i >= n || j < 0 || j >= m) return INT_MAX; // Return INT_MAX for out-of-bounds
        if (i == n - 1) return grid[i][j]; // Base case: bottom row
        if(dp[i][j]!=-1)return dp[i][j];
        int t = grid[i][j];
        int minSum = INT_MAX;
        for (int k = 0; k < m; k++) {
            if (j != k) {
                minSum = min(minSum, grid[i][j] + solve(i + 1, k, n, m, grid));
            }
        }
        return dp[i][j]=minSum;
    }
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int minSum = INT_MAX;
        memset(dp,-1,sizeof(dp));
        for (int i = 0; i < m; i++) {
            minSum = min(minSum, solve(0, i, n, m, grid));
        }
        return minSum;
    }
};
