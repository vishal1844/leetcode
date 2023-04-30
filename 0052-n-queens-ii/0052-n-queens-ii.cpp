class Solution {
    int t=0;
    void solve(int col,vector<string>&v,int n,vector<int>&leftrow,vector<int>&lowerdiagonal,vector<int>&upperdiagonal){
        if(col==n){
            t++;
            return;
        }
        for(int row=0;row<n;row++){
            if(leftrow[row]==0&&lowerdiagonal[row+col]==0&&upperdiagonal[n-1+col-row]==0){
                leftrow[row]=1;
                lowerdiagonal[row+col]=1;
                upperdiagonal[n-1+col-row]=1;
                v[row][col]='Q';
                solve(col+1,v,n,leftrow,lowerdiagonal,upperdiagonal);
                leftrow[row]=0;
                lowerdiagonal[row+col]=0;
                upperdiagonal[n-1+col-row]=0;
                v[row][col]='.';
            }
        }
    }
public:
    int totalNQueens(int n) {
        vector<string>v(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            v[i]=s;
        }
        vector<int>leftrow(n,0),lowerdiagonal(2*n-1,0),upperdiagonal(2*n-1,0);
        solve(0,v,n,leftrow,lowerdiagonal,upperdiagonal);
        return t;
        
    }
};