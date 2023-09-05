class Solution {
    int newin=-1,newjn=-1,t=0;
    int a[4]={1,-1,0,0};
    int b[4]={0,0,1,-1};
    void solve(int i,int j,int n,int m,vector<vector<int>>&mat,vector<vector<int>>&visit){
        if(t<mat[i][j]){
            t=mat[i][j];
            newin=i;
            newjn=j;
        }
        visit[i][j]=1;
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            if(newi>=0&&newj>=0&&newi<n&&newj<m&&visit[newi][newj]==0){
                solve(newi,newj,n,m,mat,visit);
            }
        }
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
         solve(0,0,n,m,mat,visit);
        vector<int>v{newin,newjn};
        return v;
    }
};