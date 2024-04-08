int dp[101][101];
class Solution {
    int solve(int i,int n,string&s,int t){
        if(i>=n){
            //cout<<"UUJI"<<t<<" ";
            if(t==0)return 1;
            return 0;
        }
        if(dp[i][t]!=-1)return dp[i][t];
        int k=0;
        if(s[i]=='('){
            k|=solve(i+1,n,s,t+1);
        }
        else if(s[i]=='*'){
            k|=solve(i+1,n,s,t+1);
            if(t){
                k|=solve(i+1,n,s,t-1);
            }
                k|=solve(i+1,n,s,t);
        }
        else{
            if(t>0){
                k|=solve(i+1,n,s,t-1);
            }
        }
        return dp[i][t]=k;
    }
public:
    bool checkValidString(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(0,s.size(),s,0);
    }
};