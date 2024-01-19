class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>prev(m,0);
        for(int j=0;j<m;++j)
            prev[j]=mat[0][j];
        for(int i=1;i<n;++i){
               vector<int>cur(m,0);
            for(int j=0;j<m;++j){
                int l=INT_MAX,r=INT_MAX,d=INT_MAX;
                if(j+1<m)
                    l=prev[j+1];
                    r=prev[j];
                if(j-1>=0)
                    d=prev[j-1];
              cur[j]=mat[i][j]+min(l,min(r,d));
            }
            prev=cur;
       }
    int ans=1e9;
        for(int j=0;j<n;++j)
            ans=min(ans,prev[j]);
        return ans;
    }
};