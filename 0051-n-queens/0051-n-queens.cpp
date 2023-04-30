class Solution {
    void solve(int col,vector<vector<string>>&ans,vector<string>&v,int n,vector<int>&lowerdiagonal,vector<int>&updiagonal,vector<int>&leftrow){
        if(col==n){
            ans.push_back(v);
            return;
        }
        for(int row=0;row<n;row++){
            if(lowerdiagonal[row+col]==0&&updiagonal[n-1+col-row]==0&&leftrow[row]==0){
                lowerdiagonal[row+col]=1;
                updiagonal[n-1+col-row]=1;
                leftrow[row]=1;
                v[row][col]='Q';
                solve(col+1,ans,v,n,lowerdiagonal,updiagonal,leftrow);
                lowerdiagonal[row+col]=0;
                updiagonal[n-1+col-row]=0;
                leftrow[row]=0;
                v[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>v(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            v[i]=s;
        }
        vector<int>lowdiagonal(2*n-1,0),updiagonal(2*n-1,0),leftrow(n,0);
        solve(0,ans,v,n,lowdiagonal,updiagonal,leftrow);
        return ans;
    }
};