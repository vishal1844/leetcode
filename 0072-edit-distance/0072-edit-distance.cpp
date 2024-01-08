class Solution {
    int solve(string&word1,string &word2,int n,int m,vector<vector<int>>&dp){
        if(n<=0)return m;
        if(m<=0)return n;
        if(dp[n][m]!=-1)return dp[n][m];
        int mini=0;
        if(word1[n-1]==word2[m-1]){
            mini=solve(word1,word2,n-1,m-1,dp);
        }
        else{
            mini=min({solve(word1,word2,n-1,m-1,dp),solve(word1,word2,n-1,m,dp),solve(word1,word2,n,m-1,dp)})+1;
        }
        return dp[n][m]=mini;
    }
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        return solve(word1,word2,word1.size(),word2.size(),dp);
    }
};