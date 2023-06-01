class Solution {
    int solve(int i,int j,int m,int n,string word1,string word2,vector<vector<int>>&dp){
        if(i>=m||j>=n){
            if(i>=m&&j>=n)return 0;
            if(i>=m){
                return n-j;
            }
            return m-i;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        if(word1[i]==word2[j]){
            return dp[i][j]=solve(i+1,j+1,m,n,word1,word2,dp);
        }
        else{
            return dp[i][j]=min(1+solve(i+1,j,m,n,word1,word2,dp),1+solve(i,j+1,m,n,word1,word2,dp));
        }
    }
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size(),-1));
        return solve(0,0,word1.size(),word2.size(),word1,word2,dp);
    }
};