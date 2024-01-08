class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,0));
        for(int i=1;i<=str1.size();i++){
            for(int j=1;j<=str2.size();j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        int n=str1.size();
        int m=str2.size();
        string s="";
        while(n>0&&m>0){
            if(str1[n-1]==str2[m-1]){
                s+=str1[n-1];
                n--;
                m--;
            }
            else{
                if(dp[n-1][m]<dp[n][m-1]){
                    s+=str2[m-1];
                    m--;
                }
                else{
                    s+=str1[n-1];
                    n--;
                }
            }
        }
        while(n--){
            s+=str1[n];
        }
        while(m--){
            s+=str2[m];
        }
        reverse(s.begin(),s.end());
        return s;
    }
};