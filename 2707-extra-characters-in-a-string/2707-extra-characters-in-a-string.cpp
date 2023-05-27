class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n=s.size();
        unordered_set<string>st(dictionary.begin(),dictionary.end());
        vector<int>dp(n+1,0);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            dp[i]=dp[i-1]+1;
            for(int j=i;j>=1;j--){
                string str=s.substr(j-1,i-j+1);
                if(st.count(str)){
                    dp[i]=min(dp[i],dp[j-1]);
                }
            }
        }
        return dp[n];
    }
};