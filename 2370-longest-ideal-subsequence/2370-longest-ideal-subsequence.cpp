int dp[100003][26];
class Solution {
    int solve(int i,int n,string&s,int k,char ch){
        if(i>=n)return 0;
        if(ch!='1')
        if(dp[i][ch-'a']!=-1)return dp[i][ch-'a'];
        int t=0;
        if(ch=='1'){
            t= 1+solve(i+1,n,s,k,s[i]);
        }
        else if(abs(ch-s[i])<=k){
            t=max(t,1+solve(i+1,n,s,k,s[i]));
        }
        t=max(t,solve(i+1,n,s,k,ch));
        if(ch=='1'){
            ch='a';
        }
        return dp[i][ch-'a']=t;
    }
public:
    int longestIdealString(string s, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(0,s.size(),s,k,'1');
    }
};