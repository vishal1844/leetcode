class Solution {
    int solve(int i,int j,string&s,vector<vector<int>>&dp){
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i]==s[j]){
            return dp[i][j]=solve(i+1,j-1,s,dp);
        }
        else{
            return dp[i][j]=min(1+solve(i,j-1,s,dp),1+solve(i+1,j,s,dp));
        }
    }
public:
    int minInsertions(string s) {
        int i,j,k,l,m,t=0;
        i=0;
        string st=s;
        reverse(st.begin(),st.end());
        m=s.size();
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,0));
        //return solve(i,j,s,dp);
        for( i=1;i<=m;i++){
            for(j=1;j<=m;j++){
                if(s[i-1]==s[m-j]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return m-dp[m][m];
        
    }
};