class Solution {
    vector<vector<int>> directions = {{1, 1}, {0, 1}, {1, 0}, {0, -1}, {-1, 0}, {-1, -1}, {1, -1}, {-1, 1}};
    int maxi = 0;

    int solve(int i, int j, int n, int m, vector<vector<int>>& vis, vector<vector<int>>& grid) {
        if (i == n && j == m) {
            maxi = 1;
            return 0;
        }
        vis[i][j] = 1;
        int k = INT_MAX-1;
        for (auto& itr : directions) {
            int newi = itr[0] + i;
            int newj = itr[1] + j;
            if (newi <= n && newj <= m && newi >= 0 && newj >= 0 && grid[newi][newj] == 0 && !vis[newi][newj]) {
                k = min(k, 1 + solve(newi, newj, n, m, vis, grid));
            }
        }
        vis[i][j] = 0;  // Backtrack
        return k;
    }

public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int,int>>q;
        if(grid[0][0]==1)return -1;
        if(grid[n-1][m-1]==1)return -1;
        q.push({0,0});
        grid[0][0]=1;
        while(!q.empty()){
            auto itr=q.front();
            q.pop();
            int i=itr.first;
            int j=itr.second;
            if(i==n-1&&j==m-1)return grid[i][j];
             for (auto& itr : directions) {
            int newi = itr[0] + i;
            int newj = itr[1] + j;
            if (newi <n && newj < m && newi >= 0 && newj >= 0 && grid[newi][newj] == 0) {
                q.push({newi,newj});
                grid[newi][newj]=grid[i][j]+1;
            }
        }
           // return -1;
            
        }
        return -1;
    }
};