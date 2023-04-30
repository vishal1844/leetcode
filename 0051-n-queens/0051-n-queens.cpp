class Solution {
    bool issafe(int row,int col,vector<string>v,int n){
        int duprow=row;
        int dupcol=col;
        while(row>=0&&col>=0){
            if(v[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0){
            if(v[row][col]=='Q')return false;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(row<n&col>=0){
            if(v[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
public:
    void solve(int col,vector<vector<string>>&ans,vector<string>&v,int n){
        if(col==n){
            ans.push_back(v);
            return;
        }
        for(int row=0;row<n;row++){
            if(issafe(row,col,v,n)){
                v[row][col]='Q';
                solve(col+1,ans,v,n);
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
        solve(0,ans,v,n);
        return ans;
        
    }
};