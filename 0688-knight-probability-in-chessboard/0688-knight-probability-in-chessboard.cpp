class Solution { 
    unordered_map<int, unordered_map<int, unordered_map<int, double>>>dp;
public:
    double knightProbability(int N, int k, int r, int c) {
          if(dp.count(r) && dp[r].count(c) && dp[r][c].count(k)) return dp[r][c][k];
        if(r < 0 || r >= N || c < 0 || c >= N) return 0;
        if(k == 0) return 1;
        double total = knightProbability(N, k - 1, r - 1, c - 2) + knightProbability(N, k - 1, r - 2, c - 1) 
                     + knightProbability(N, k - 1, r - 1, c + 2) + knightProbability(N, k - 1, r - 2, c + 1) 
                     + knightProbability(N, k - 1, r + 1, c + 2) + knightProbability(N, k - 1, r + 2, c + 1) 
                     + knightProbability(N, k - 1, r + 1, c - 2) + knightProbability(N, k - 1, r + 2, c - 1);
        double res = total / 8;
        dp[r][c][k] = res;
        return res;
    }
};