class Solution {
    int solve(int i,int n,string&s,vector<int>&dp){
        if(i>=n)return 1;
        if(s[i]=='0')return 0;
        if(dp[i]!=-1)return dp[i];
        int t=0,l=0,m=0;
        t=solve(i+1,n,s,dp);
        if(i<n-1){
            l=(s[i]-'0')*10+(s[i+1]-'0');
            if(l>=1&&l<=26){
                m=solve(i+2,n,s,dp);
            }
        }
        return dp[i]=t+m;
    }
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        return solve(0,n,s,dp);
    }
};