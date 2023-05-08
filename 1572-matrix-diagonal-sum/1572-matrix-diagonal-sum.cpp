class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i,j=mat.size()-1,k,l,t=0;
        for(i=0;i<mat.size();i++){
            t+=mat[i][i];
            t+=mat[i][j--];
        }
        if(mat.size()%2==1){
            t-=mat[mat.size()/2][mat.size()/2];
        }
        return t;
    }
};