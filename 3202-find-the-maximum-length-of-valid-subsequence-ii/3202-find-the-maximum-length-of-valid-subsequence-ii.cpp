int dp[1001][1001];
class Solution {
    int solve(int prev,int n,vector<int>&nums,int k,int mod){
        if(dp[prev][mod]!=-1)return dp[prev][mod];
        int take=1;
        for(int i=prev+1;i<n;i++){
            if((nums[i]+nums[prev])%k==mod){
                take=1+solve(i,n,nums,k,mod);
                break;
            }
        }
        return dp[prev][mod]=take;
    }
public:
    int maximumLength(vector<int>& nums, int k) {
        int i,j,l,m,t=0;
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                t=max(t,1+solve(j,n,nums,k,(nums[i]+nums[j])%k));
            }
        }
        return t;
    }
};