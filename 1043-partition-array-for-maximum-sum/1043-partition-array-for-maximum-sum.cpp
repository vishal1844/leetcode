class Solution {
    int count=0;
    int dp[501];
    int solve(int i,int n,vector<int>&arr,int k){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1)return dp[i];
        int ans=0;
        int maxi=0;
        for(int j=i;j<min(i+k,n);j++){
            maxi=max(maxi,arr[j]);
            ans=max(ans,(((j-i+1)*maxi)+solve(j+1,n,arr,k)));
        }
        return dp[i]=ans;
        
    }
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp,-1,sizeof(dp));
       return  solve(0,arr.size(),arr,k);
    }
};