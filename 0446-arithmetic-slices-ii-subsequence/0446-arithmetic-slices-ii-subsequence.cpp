class Solution {
    int te=0;
    void solve(int i,int n,vector<int>&nums,int prev,int count){
        if(count>=2)te++;
        if(i>=n-1){
            return ;
        }
        int sum=0;
        for(int j=i+1;j<n;j++){
            if(prev==-1){
                prev=nums[j]-nums[i];
                solve(j,n,nums,prev,count+1);
            }
            else if((nums[j]-nums[i])==prev){
                solve(j,n,nums,prev,count+1);
            }
        }
        //return sum;
    }
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        // int t=0;
        // for(int i=0;i<nums.size();i++){
        //  solve(i,nums.size(),nums,-1,0);
        //     t+=te;
        //     te=0;
        //     cout<<t<<" ";
        // }
        // return t;
        vector<unordered_map<long, long> > dp(nums.size());
        int ans = 0 ;
        for (int i = 0; i < nums.size() ; i++) 
        {
            for (int j = 0; j < i ; j++) 
            {
                long diff = (long)nums[i] - (long)nums[j] ; 
                dp[i][diff]++ ;
                if(dp[j].find(diff) != dp[j].end()) // Check for key 
                {
                    dp[i][diff] += dp[j][diff]; 
                    ans += dp[j][diff] ;
                }
            }
        }
        return ans ;
    }
};