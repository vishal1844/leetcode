class Solution {
    int a[4]={-1,0,+1,0};
    int b[4]={0,-1,0,+1};
    bool solve(int i,int j,int n,int m,int w,vector<vector<char>>&board,string word,vector<vector<char>>&visit){
        if(w==word.size()-1){
            return true;
        }
       // if(i<0||j<0||i>=n||j>=m)return 0;
        for(int k=0;k<4;k++){
            int nexti=i+a[k];
            int nextj=j+b[k];
            if(nexti>=0&&nextj>=0&&nexti<n&&nextj<m&&visit[nexti][nextj]!='1'&&board[nexti][nextj]==word[w+1]){
                visit[nexti][nextj]='1';
            if(solve(nexti,nextj,n,m,w+1,board,word,visit))return true;
                visit[nexti][nextj]='0';
            }
        }
        return 0;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<char>>visit(board.size()+1,vector<char>(board[0].size()+1,'0'));
        int a[4]={-1,0,+1,0};
        int b[4]={0,-1,0,+1};
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    visit[i][j]='1';
                    if(solve(i,j,board.size(),board[0].size(),0,board,word,visit)){
                        return true;
                    }
                    visit[i][j]='0';
                }
            }
        }
        return false;
    }
};