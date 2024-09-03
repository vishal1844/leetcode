class Solution {
public:
    vector<int> maximumSubarrayXor(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        int i,j,k,l,m,t=0;
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(i=0;i<n;i++){
            dp[i][i]=nums[i];
        }
        i=0;
        for(j=1;j<n;j++){
            k=j;
            for(i=0;i<n-j;i++){
                dp[i][k++]=dp[i][k-1]^dp[i+1][k];
            }
        }
        vector<int>ans;
        for(j=1;j<n;j++){
            k=j;
            for(i=0;i<n-j;i++){
                dp[i][k++]=max({dp[i][k],dp[i][k-1],dp[i+1][k]});
            }
        }
        for(auto itr:queries){
            ans.push_back(dp[itr[0]][itr[1]]);
        }
        return ans;
        
    }
};