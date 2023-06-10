class Solution {
    int a[4]={-1,1,0,0};
    int b[4]={0,0,-1,1};
    int dp[51][51][51];
    int solve(int i,int j,int m,int n,int move,int &count,vector<vector<int>>&visit){
        if(i<0||j<0||i>=m||j>=n){
            //if(move>=0)count++;
            return 1;
        }
        if(move<=0)return 0;
        int t=0;
        if(dp[i][j][move]!=-1)return dp[i][j][move];
        for(int k=0;k<4;k++){
            int nexti=i+a[k];
            int nextj=j+b[k];
            t=(t+solve(nexti,nextj,m,n,move-1,count,visit))%1000000007;
        }
        return dp[i][j][move]=t;
    }
public:
    int findPaths(int m, int n, int move, int start, int column) {
        int count=0;
        vector<vector<int>>visit(m+1,vector<int>(n+1,0));
        visit[start][column]=1;
        memset(dp,-1,sizeof(dp));
        return solve(start,column,m,n,move,count,visit);
        return count;
    }
};