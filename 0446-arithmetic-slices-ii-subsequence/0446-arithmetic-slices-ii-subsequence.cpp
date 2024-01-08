class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<map<long long int,long long int>>dp(nums.size());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                long long diff=(long long)nums[i]-(long long)nums[j];
                dp[i][diff]++;
                if(dp[j].find(diff)!=dp[j].end()){
                    dp[i][diff]+=dp[j][diff];
                    ans+=dp[j][diff];
                }
            }
        }
        return ans;
        
    }
};