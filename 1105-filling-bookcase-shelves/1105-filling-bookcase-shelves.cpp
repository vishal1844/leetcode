class Solution {
    int dp[1001][1001];
    int solve(int i,vector<vector<int>>&books,int s,int remainings,int maxh){
        if(i>=books.size())return maxh;
        if(dp[i][remainings]!=-1)return dp[i][remainings];
        int t=INT_MAX;
        if(remainings>=books[i][0]){
            t=min(t,solve(i+1,books,s,remainings-books[i][0],max(maxh,books[i][1])));
        }
        return dp[i][remainings]=min(t,maxh+solve(i+1,books,s,s-books[i][0],books[i][1]));
    }
public:
    int minHeightShelves(vector<vector<int>>& books, int s) {
        memset(dp,-1,sizeof(dp));
        return solve(0,books,s,s,0);
    }
};