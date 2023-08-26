class Solution {
    int solve(int i,vector<vector<int>>&pairs,vector<int>&dp){
        if(dp[i]!=-1)return dp[i];
        int ans=0;
        dp[i]=1;
        for(int k=i+1;k<pairs.size();k++){
            if(pairs[i][1]<pairs[k][0]){
                dp[i]=max(dp[i],1+solve(k,pairs,dp));
            }
        }
        return dp[i];
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int maxi=0;
        vector<int>dp(pairs.size()+1,-1);
        for(int i=0;i<pairs.size();i++){
            maxi=max(maxi,solve(i,pairs,dp));
        }
        return maxi;
        
    }
};