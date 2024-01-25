int dp[101][101];
class Solution {
    int solve(int i,int n,vector<int>&cuts,int left,int right){
        if(left>right)return 0;
        int cost=1e9;
        if(dp[left][right]!=-1)return dp[left][right];
        for(int k=left;k<=right;k++){
            int left_cost=abs(i-cuts[k])+solve(i,cuts[k],cuts,left,k-1);
            int right_cost=abs(n-cuts[k])+solve(cuts[k],n,cuts,k+1,right);
            cost=min(cost,(left_cost+right_cost));
        }
        return dp[left][right]=cost;
    }
public:
    int minCost(int n, vector<int>& cuts) {
        sort(cuts.begin(),cuts.end());
        memset(dp,-1,sizeof(dp));
        return solve(0,n,cuts,0,cuts.size()-1);
    }
};