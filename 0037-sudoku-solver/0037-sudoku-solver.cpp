class Solution {
    bool issafe(int i,int j,vector<vector<char>>&board,char ch){
        for(int t=0;t<9;t++){
            if(board[t][j]==ch)return false;
            if(board[i][t]==ch)return false;
            if(board[3*(i/3)+t/3][3*(j/3)+t%3]==ch)return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char ch='1';ch<='9';ch++){
                        if(issafe(i,j,board,ch)){
                            board[i][j]=ch;
                            if(solve(board)==true){
                                return true;
                            }
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};