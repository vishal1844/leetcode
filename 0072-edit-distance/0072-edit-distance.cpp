class Solution {
    int solve(string&word1,string &word2,int n,int m,vector<vector<int>>&dp){
        if(n<=0)return m;
        if(m<=0)return n;
        if(dp[n][m]!=-1)return dp[n][m];
        int mini=0;
        if(word1[n-1]==word2[m-1]){
            return dp[n][m]=solve(word1,word2,n-1,m-1,dp);
        }
        else{
            return dp[n][m]=min({solve(word1,word2,n-1,m-1,dp),solve(word1,word2,n-1,m,dp),solve(word1,word2,n,m-1,dp)})+1;
        }
        return dp[n][m]=mini;
    }
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        //return solve(word1,word2,word1.size(),word2.size(),dp);
        int i,j;
        for(i=0;i<word1.size()+1;i++){
            dp[i][0]=i;
        }
        for(i=0;i<word2.size()+1;i++){
            dp[0][i]=i;
        }
        for(i=1;i<=word1.size();i++){
            for(j=1;j<=word2.size();j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
                }
            }
        }
        return dp[word1.size()][word2.size()];
    }
};