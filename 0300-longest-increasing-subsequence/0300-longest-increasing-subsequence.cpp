int dp[2501][2505];
class Solution {
     int t = 0;
   // int dp[25001][25001];

    int solve(int i, int n,vector<int>& nums,int prevind) {
        if (i >= n) {
            // t = std::max(t, c);
            return 0;
        }

        int take = 0, not_take;
        if (dp[i][prevind+1] != -1) return dp[i][prevind+1];

        if (prevind==-1 || nums[prevind] < nums[i]) {
            take = 1 + solve(i + 1, n, nums,i);
        }
        not_take = solve(i + 1, n, nums,prevind);

        return dp[i][prevind+1] = max(take, not_take);
    }

public:
    int lengthOfLIS(vector<int>& nums) {
        int c = 0;
        memset(dp, -1, sizeof(dp));
        return solve(0, nums.size(), nums,-1);
        // return t;
    }
};