class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i,j,k,l,m,t,n;
        for(i=1;i<matrix.size();i++){
            for(j=0;j<matrix[0].size()-1;j++){
                if(matrix[i-1][j]!=matrix[i][j+1])
                    return false;
            }
        }
        return true;
    }
};