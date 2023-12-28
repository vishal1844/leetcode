int dp[101][27][101][101];
class Solution {
    int t;
   // int dp[101][27][101][101];
    unordered_set<int>st{1,9,99};
    int solve(int i,int n,string&s,int k,char prevchar,int freq){
        if(k<0)return INT_MAX/4;
        if(i>=n){
           // t=min(t,count);
            return 0;
        }
        int &ans=dp[i][prevchar-'a'][freq][k];
        if(ans!=-1)return ans;
        int take,remov=INT_MAX;
//if(k>0){
            remov=solve(i+1,n,s,k-1,prevchar,freq);
       // }
        if(prevchar==s[i]){
            take=solve(i+1,n,s,k,s[i],freq+1)+(st.count(freq)?1:0);
        }
        else{
            take=solve(i+1,n,s,k,s[i],1)+1;
        }
       ans=min(take,remov);
        return ans;
        
    }
public:
    int getLengthOfOptimalCompression(string s, int k) {
        char c='z'+1;
        t=s.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,s.size(),s,k,c,0);
        //return t;
    }
};