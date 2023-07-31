class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int i,j=0,k,l,t=0;
        for(k=0;k<n;k++){
            vector<int>v;
            j=0;
            i=k;
            while(i<n&&j<m){
                v.push_back(mat[i][j]);
                i++;
                j++;
            }
            sort(v.begin(),v.end());
            j=0;
            i=k;
            l=0;
            while(i<n&&j<m){
                mat[i][j]=v[l++];
                i++;
                j++;
            }
        }
        for(k=1;k<m;k++){
            vector<int>v;
            j=k;
            i=0;
            while(i<n&&j<m){
                v.push_back(mat[i][j]);
                i++;
                j++;
            }
            sort(v.begin(),v.end());
            i=0;
            j=k;
            l=0;
            while(i<n&&j<m){
                mat[i][j]=v[l++];
                i++;
                j++;
            }
        }
        return mat;
    }
};