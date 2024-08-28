class Solution {
    int a[4] = {1, 0, -1, 0};
    int b[4] = {0, 1, 0, -1};
    bool check = true;

    void solve(int i, int j, vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        grid1[i][j] = 0; // Mark cell as visited in grid1
        grid2[i][j] = 0; // Mark cell as visited in grid2

        for (int k = 0; k < 4; k++) {
            int newi = i + a[k];
            int newj = j + b[k];

            // Continue DFS if new cell is valid and unvisited
            if (newi >= 0 && newi < grid1.size() && newj >= 0 && newj < grid1[0].size()) {
                if (grid2[newi][newj] == 1) {
                    if (grid1[newi][newj] == 0) {
                        check = false; // If grid1 has no land but grid2 does, it's not a valid sub-island
                    } else {
                        solve(newi, newj, grid1, grid2); // Continue DFS
                    }
                }
            }
        }
    }

public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size();
        int m = grid2[0].size(); // Corrected dimension calculation
        int t = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid2[i][j] == 1 && grid1[i][j] == 1) {
                    check = true;
                    solve(i, j, grid1, grid2);
                    if (check) {
                        t++;
                    }
                }
            }
        }

        return t; 
    }
};
