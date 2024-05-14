#include <vector>
#include <algorithm> // for std::max

class Solution {
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Up, Down, Left, Right

    int dfs(int i, int j, std::vector<std::vector<int>>& grid, std::vector<std::vector<int>>& visited) {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0 || visited[i][j]) {
            return 0; // Out of bounds or visited cell or empty cell
        }

        visited[i][j] = 1; // Mark current cell as visited
        int gold = grid[i][j]; // Gold at current cell

        // Explore in all four directions
        for (const auto& dir : directions) {
            int newi = i + dir[0];
            int newj = j + dir[1];
            gold = std::max(gold, grid[i][j] + dfs(newi, newj, grid, visited)); // Update maximum gold
        }

        visited[i][j] = 0; // Mark current cell as unvisited (backtrack)
        return gold;
    }

public:
    int getMaximumGold(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxGold = 0;

        std::vector<std::vector<int>> visited(n, std::vector<int>(m, 0)); // Visited matrix

        // Start DFS from each cell with gold
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0) { // Cell contains gold
                    maxGold = std::max(maxGold, dfs(i, j, grid, visited));
                }
            }
        }

        return maxGold;
    }
};
