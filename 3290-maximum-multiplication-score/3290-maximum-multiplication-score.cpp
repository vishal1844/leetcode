class Solution {
    vector<vector<long long>> dp;
    long long solve(int i, int j, vector<int>& a, vector<int>& b) {
        if (i >= a.size()) {
            return 0;
        }
        if (j >= b.size()) {
            return INT_MIN;
        }
        if (dp[i][j] != INT_MIN) {
            return dp[i][j];
        }
        long long maxi = INT_MIN;
        //for (int k = j; k < b.size(); k++) {
            long long mul = 1LL * a[i] * b[j];
            maxi = max(maxi, mul + solve(i + 1, j + 1, a, b));
            maxi = max(maxi, solve(i, j + 1, a, b));  // Skipping this pair
       // }
        return dp[i][j] = maxi;
    }

public:
    long long maxScore(vector<int>& a, vector<int>& b) {
        dp = vector<vector<long long>>(a.size(), vector<long long>(b.size(), INT_MIN));
        return solve(0, 0, a, b);
    }
};
