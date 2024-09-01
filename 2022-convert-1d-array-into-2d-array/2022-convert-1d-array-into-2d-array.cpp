class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans(m,vector<int>(n,0));
        if(original.size()!=(m*n))return {};
        int i,j,k=0,l,t=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                ans[i][j]=original[k++];
            }
        }
        return ans;
    }
};