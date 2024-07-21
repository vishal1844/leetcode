class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size();
        int m=colSum.size();
        int i,j,k,l;
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ans[i][j]=min(rowSum[i],colSum[j]);
                k=min(rowSum[i],colSum[j]);
                rowSum[i]-=k;
                colSum[j]-=k;
            }
        }
        return ans;
    }
};