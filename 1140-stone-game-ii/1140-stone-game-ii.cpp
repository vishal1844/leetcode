class Solution {
    int dp[101][101][2];
    int solve(int i,int n,vector<int>&piles,int person,int m){
        if(i>=n)return 0;
        if(dp[i][m][person]!=-1)return dp[i][m][person];
        int t=0;
        int maxi=0;
        int mini=INT_MAX;
        for(int k=1;k<=min(2*m,n-i);k++){
            if(person==1){
                t+=piles[i+k-1];
                maxi=max(maxi,t+solve(i+k,n,piles,0,max(m,k)));
            }
            else{
                mini=min(mini,solve(i+k,n,piles,1,max(m,k)));
            }
        }
        if(person==1)return dp[i][m][person]=maxi;
        return dp[i][m][person]=mini;
    }
public:
    int stoneGameII(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        return solve(0,piles.size(),piles,1,1);
    }
};