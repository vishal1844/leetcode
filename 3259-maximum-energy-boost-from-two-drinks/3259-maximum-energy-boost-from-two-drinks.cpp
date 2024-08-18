class Solution {
    long long dp[100005][2];
    long long solve(int i,int n,vector<int>&A,vector<int>&B,int flag){
        if(i>=n)return 0;
        if(dp[i][flag]!=-1)return dp[i][flag];
        if(flag==0){
            return dp[i][flag]= max(A[i]+solve(i+1,n,A,B,flag),solve(i+1,n,A,B,flag^1));
        }
        else{
            return dp[i][flag]= max(B[i]+solve(i+1,n,A,B,flag),solve(i+1,n,A,B,flag^1));
        }
        return dp[i][flag];
    }
public:
    long long maxEnergyBoost(vector<int>& A, vector<int>& B) {
        int n=A.size();
        memset(dp,-1,sizeof(dp));
        return max(solve(0,n,A,B,0),solve(0,n,A,B,1));
    }
};