class Solution {
public:
    int dp[2001][2001];
    int fun(vector<vector<int>>&v,int ind,int t,int m){
        if(ind<0||t<=0)return 0;
        if(dp[ind][t]!=-1)return dp[ind][t];
        int ans=0;
        ans=fun(v,ind-1,t,m);
        int sum=0;
        for(int i=0;i<(t>=v[ind].size()?v[ind].size():t);i++){
          //  cout<<ind<<' '<<i<<' ';
            sum+=v[ind][i];
            ans=max(ans,fun(v,ind-1,t-i-1,m)+sum);
            //dp[ind][i]=ans;
        }
        return dp[ind][t]=ans;
    }
    int maxValueOfCoins(vector<vector<int>>& v, int k) {
        memset(dp,-1,sizeof(dp));
        return fun(v,v.size()-1,k,v.size());
    }
};