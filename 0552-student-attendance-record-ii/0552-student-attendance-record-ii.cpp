class Solution {
public:
    int checkRecord(int n) {
        int MOD = 1000000007;
        vector<vector<vector<int>>> dp = vector<vector<vector<int>>>(n + 1, 
                                            vector<vector<int>>(2, vector<int>(3, 0)));
        dp[0][0][0] = 1;

        for (int len = 0; len < n; ++len) {
            for (int totalAbsences = 0; totalAbsences <= 1; ++totalAbsences) {
                for (int consecutiveLates = 0; consecutiveLates <= 2; ++consecutiveLates) {
                    dp[len + 1][totalAbsences][0] = (
                        dp[len + 1][totalAbsences][0] +
                        dp[len][totalAbsences][consecutiveLates]
                    ) % MOD;
                    if (totalAbsences < 1) {
                        dp[len + 1][totalAbsences + 1][0] = (
                            dp[len + 1][totalAbsences + 1][0] + 
                            dp[len][totalAbsences][consecutiveLates]
                        ) % MOD;
                    }
                    if (consecutiveLates < 2) {
                        dp[len + 1][totalAbsences][consecutiveLates + 1] = (
                            dp[len + 1][totalAbsences][consecutiveLates + 1] + 
                            dp[len][totalAbsences][consecutiveLates]
                        ) % MOD;
                    }
                }
            }
        }
        int count = 0;
        for (int totalAbsences = 0; totalAbsences <= 1; ++totalAbsences) {
            for (int consecutiveLates = 0; consecutiveLates <= 2; ++consecutiveLates) {
                count = (count + dp[n][totalAbsences][consecutiveLates]) % MOD;
            }
        }
        return count;
    }
};