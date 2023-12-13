class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int i,j,k,l,m,t=0;
        vector<int>v(mat.size(),0);
        vector<int>vec(mat[0].size(),0);
        for(i=0;i<mat.size();i++){
            for(j=0;j<mat[0].size();j++){
                if(mat[i][j]){
                    v[i]++;
                    vec[j]++;
                }
            }
        }
        for(i=0;i<mat.size();i++){
            for(j=0;j<mat[0].size();j++){
                if(mat[i][j]&&v[i]==1&&vec[j]==1)t++;
            }
        }
        return t;
    }
};