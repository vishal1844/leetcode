int dp[100003][26]; // dp array with 26 characters

class Solution {
    int solve(int i, int n, string& s, int k, int ch,int l) {
        if (i >= n) return 0;
        if (dp[i][ch] != -1) {
            return dp[i][ch];
        }
        int t = 0;
        if (ch + 'a' != s[i]&&l==1) {
            t = solve(i + 1, n, s, k, ch,l);
        } else {
            l=0;
            if (abs(s[i] - 'a' - ch) <= k) {
                t = max(t, 1 + solve(i + 1, n, s, k, s[i] - 'a',l));
            }
            t = max(t, solve(i + 1, n, s, k, ch,l));
        }
        return dp[i][ch] = t;
    }

public:
    int longestIdealString(string s, int k) {
        memset(dp, -1, sizeof(dp));
        int maxLen = 0;
        for (int i = 0; i < 26; i++) {
            int l=1;
            maxLen = max(maxLen, solve(0, s.size(), s, k, i,l));
        }
        return maxLen;
    }
};