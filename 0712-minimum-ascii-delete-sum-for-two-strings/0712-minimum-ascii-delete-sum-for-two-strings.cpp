class Solution {
    int dp[1001][1001];
    int solve(int i,int j,int n,int m,string&s1,string&s2){
        if(i>=n||j>=m){
            int sum=0;
            if(i<n){
                for(int k=i;k<n;k++){
                    sum+=s1[k];
                }
            }
            else{
                for(int k=j;k<m;k++){
                    sum+=s2[k];
                }
            }
          //  cout<<sum<<"  ";
            return sum;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        int take=1e9,not_take=1e9;
        if(s1[i]==s2[j]){
            take=solve(i+1,j+1,n,m,s1,s2);
        }
        else{
            not_take=min(s1[i]+solve(i+1,j,n,m,s1,s2),s2[j]+solve(i,j+1,n,m,s1,s2));
        }
        return dp[i][j]=min(take,not_take);
    }
public:
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,n,m,s1,s2);
    }
};