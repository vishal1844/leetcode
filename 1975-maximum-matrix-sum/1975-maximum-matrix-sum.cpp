class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long t=0,i,j,k=0,c=0;
        int maxi=INT_MAX;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<0){
                    c++;
                   // maxi=mini(maxi,abs(matrix[i][j]));
                }
                maxi=min(maxi,abs(matrix[i][j]));
                t+=abs(matrix[i][j]);
            }
        }
        if(c%2==0)
        return t;
        return t-2*maxi;
    }
};