int dp[1002][1002];
class Solution {
    //int dp[1002][1002];
public:
    int solve(int i,int j,int n1,int n2,string&text1,string&text2){
        if(i<0||j<0||i>=n1||j>=n2){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int take=0;
        int not_take=0;
        if(text1[i]==text2[j]){
             take= 1+solve(i+1,j+1,n1,n2,text1,text2);
        }
        else
        not_take=max(solve(i+1,j,n1,n2,text1,text2),solve(i,j+1,n1,n2,text1,text2));
        return dp[i][j]=take+not_take;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1,n2;
        n1=text1.size();
        n2=text2.size();
        //memset(dp,-1,sizeof(dp));
        //return solve(0,0,n1,n2,text1,text2);
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n1][n2];
    }
};