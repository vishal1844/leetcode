class Solution {
    vector<int>ans,v;
    int dp[1001];
    int solve(int i,int n,vector<int>&nums,int prev){
        if(i==n){
            if(v.size()<ans.size()){
                v=ans;
                return 0;
            }
            return 0;
        }
        int t=0;
        if( dp[i]<(int)ans.size()&&(prev==-1||nums[i]%nums[prev]==0)){
            dp[i]=ans.size();
            ans.push_back(nums[i]);
            t=1+solve(i+1,n,nums,i);
            ans.pop_back();
        }
        t=max(t,solve(i+1,n,nums,prev));
        return t;
    }
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        memset(dp,-1,sizeof(dp));
         solve(0,nums.size(),nums,-1);
        return v;
    }
};