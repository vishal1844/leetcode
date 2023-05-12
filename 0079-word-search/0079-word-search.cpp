class Solution {
    bool solve(int i,int j,int w,int n,int m,vector<vector<char>>&board,string&word,vector<vector<char>>&visit){
        if(w==word.size()){
            return true;
        }
        if(i<0||j<0||i>=n||j>=m){
            return 0;
        }
        // if(w==word.size()){
        //     return true;
        // }
        if(board[i][j]==word[w]&&visit[i][j]=='0'){
            visit[i][j]='1';
            if(solve(i+1,j,w+1,n,m,board,word,visit)){
                return true;
            }
            visit[i][j]='0';
        }
        if(board[i][j]==word[w]&&visit[i][j]=='0'){
            visit[i][j]='1';
            if(solve(i,j+1,w+1,n,m,board,word,visit))return true;
            visit[i][j]='0';
        }
        if(board[i][j]==word[w]&&visit[i][j]=='0'){
            visit[i][j]='1';
            if(solve(i,j-1,w+1,n,m,board,word,visit))return true;
            visit[i][j]='0';
        }
        if(board[i][j]==word[w]&&visit[i][j]=='0'){
            visit[i][j]='1';
            if(solve(i-1,j,w+1,n,m,board,word,visit))return true;
            visit[i][j]='0';
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<char>>visit(board.size()+1,vector<char>(board[0].size()+1,'0'));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if(solve(i,j,0,board.size(),board[0].size(),board,word,visit)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};