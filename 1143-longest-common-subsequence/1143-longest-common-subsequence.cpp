int dp[1001][1001];
class Solution {
    int solve(int i,int j,string&s1,string&s2){
        if(i<0||j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s1[i]==s2[j]){
            return dp[i][j]= 1+solve(i-1,j-1,s1,s2);
        }
        return dp[i][j]=max(solve(i-1,j,s1,s2),solve(i,j-1,s1,s2));
    }
public:
    int longestCommonSubsequence(string s1, string s2) {
        // memset(dp,-1,sizeof(dp));
        // return solve(s1.size()-1,s2.size()-1,s1,s2);
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,0));
        int n=s1.size();
        int m=s2.size();
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];      
    }
};