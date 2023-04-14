class Solution {
    int solve(int i,int j,string&s,string&st,vector<vector<int>>&dp){
        if(i<0||j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==st[j]){
            return dp[i][j]=1+solve(i-1,j-1,s,st,dp);
        }
        return dp[i][j]=max(solve(i-1,j,s,st,dp),solve(i,j-1,s,st,dp));
    }
public:
    int longestPalindromeSubseq(string s) {
        string st=s;
        reverse(st.begin(),st.end());
        int n=s.size();
        int m=st.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,s,st,dp);
    }
};