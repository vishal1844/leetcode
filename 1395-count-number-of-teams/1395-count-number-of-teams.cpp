class Solution {
    int incorder(int i,vector<int>&rating,int size,vector<vector<int>>&dp){
        if(i>=rating.size())return 0;
        if(size==3)return 1;
        if(dp[i][size]!=-1)return dp[i][size];
        int t=0;
        for(int k=i+1;k<rating.size();k++){
            if(rating[i]<rating[k]){
                t+=incorder(k,rating,size+1,dp);
            }
        }
        return dp[i][size]=t;
    }
    int decorder(int i,vector<int>&rating,int size,vector<vector<int>>&dp){
        if(i>=rating.size())return 0;
        if(size==3)return 1;
        if(dp[i][size]!=-1)return dp[i][size];
        int t=0;
        for(int k=i+1;k<rating.size();k++){
            if(rating[i]>rating[k]){
                t+=decorder(k,rating,size+1,dp);
            }
        }
        return dp[i][size]=t;
    }
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int i,j,k,l,m,t=0;
        vector<vector<int>>dp(n+1,vector<int>(4,-1));
        vector<vector<int>>dps(n+1,vector<int>(4,-1));
        for(i=0;i<n;i++){
            t+=incorder(i,rating,1,dp);
            t+=decorder(i,rating,1,dps);
        }
        return t;
    }
};