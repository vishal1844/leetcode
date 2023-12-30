int dp[301][11];
class Solution {
    int solve(int i,int n,vector<int>&v,int d){
        if(i==n&&d==0){
            return 0;
        }
        if(i==n||d==0||n-i<d)return INT_MAX/2;
        if(dp[i][d]!=-1)return dp[i][d];
        int maxi=0;
        int mini=INT_MAX/2;
        for(int j=i;j<n;j++){
            maxi=max(maxi,v[j]);
            mini=min(mini,(maxi+solve(j+1,n,v,d-1)));
        }
        return dp[i][d]=mini;
    }
public:
    int minDifficulty(vector<int>& j, int d) {
        if(j.size()<d)return -1;
        memset(dp,-1,sizeof(dp));
        return solve(0,j.size(),j,d);
    }
};