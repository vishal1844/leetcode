class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j,k,l,t=0;
        int n=matrix[0].size();
        vector<vector<int>>v(n,vector<int>(matrix.size(),0));
        for(i=0;i<matrix.size();i++){
            for(j=0;j<n;j++){
                v[j][i]=matrix[i][j];
            }
        }
        return v;
        
    }
};