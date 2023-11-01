class Solution {
private: 
//     bool solve(vector<vector<bool>> &dp, int i, int j, string &s){
//         if(i == j){
//             return dp[i][j] = true;
//         }
//         if(j-i == 1){
//             if(s[i] == s[j]){
//                 return dp[i][j] = true;
//             }
//             else{
//                 return dp[i][j] = false;
//             }
//         }
//         if(s[i] == s[j] && dp[i+1][j-1] == true){
//             return dp[i][j] = true;
//         } else {
//             return dp[i][j] = false;
//         }
//     }
// public:
//     string longestPalindrome(string s) {
//         int n = s.size();
//         int startIndex = 0; int maxlen = 0;
//         vector<vector<bool>> dp(n, vector<bool>(n, false));
//         for(int g=0; g<n; g++){
//             for(int i=0, j=g; j<n; i++, j++){
//                 solve(dp, i, j, s);
//                 if(dp[i][j] == true){
//                     if(j-i+1 > maxlen){
//                         startIndex = i;
//                         maxlen = j-i+1;
//                     }
//                 }
//             }
//         }
//         return s.substr(startIndex, maxlen);
//     }
    int check(string &s, int L, int R)
    {
        while(L>=0 and R<s.length() and s[L]==s[R])
        {
            L--;
            R++;
        }
        // cout<<"r="<<R<<"l="<<L;
         //cout<<R-L-1<<" ";
        return (R-1)-(L+1)+1;
    }
    public:
    
    string longestPalindrome(string s) {
        
        int ans = 0, st=0;
        int n = s.length();
        
        for(int i = 0;i<n;i++)
        {
            int len1 = check(s, i,i);
            int len2 = check(s, i, i+1);
            
            int len = max(len1, len2);
            
            if(len> ans)
            {
                ans = len;
                st = i-(len-1)/2;
                //cout<<i<<st<<" ";
            }
        }
        return s.substr(st, ans);
    }
};
