class Solution {
    int dp[101][101];
    int repeat(int i,int n,string&s){
        int j,k,l;
        while(i<n&&(s[i]==s[i-1])){
            i++;
        }
        return i;
    }
    int solve(int i,int n,string &s){
        if(i>=n)return 0;
        int k=repeat(i+1,n,s);
        if(k>=n)return 1;
        if(dp[i][n]!=-1)return dp[i][n];
        int basic=1+solve(k,n,s);
        int lalach=INT_MAX;
        for(k=i+1;k<n;k++){
            if(s[k]==s[i]){
                lalach=min(lalach,solve(i+1,k,s)+solve(k,n,s));
            }
        }
        return dp[i][n]=min(lalach,basic);
        
    }
public:
    int strangePrinter(string s) {
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,n,s);
    }
};