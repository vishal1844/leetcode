class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,k,l,m,t=0;
        vector<vector<int>>v;
        for(i=0;i<matrix.size();i++){
            vector<int>vec;
            for(j=matrix.size()-1;j>=0;j--){
                vec.push_back(matrix[j][i]);
            }
            v.push_back(vec);
        }
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix.size();j++){
                matrix[i][j]=v[i][j];
            }
        }
    }
};