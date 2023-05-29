class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int i,j,k,l,m,t=0;
        for(auto itr:queries){
            i=itr[0];
            j=itr[1];
            k=itr[2];
            l=itr[3];
            // if(l!=n-1){
            //     l++;
            // }
            for(int p=i;p<=k;p++){
                ans[p][j]+=1;
                if(l!=n-1){
                    ans[p][l+1]-=1;
                }
            }
        }
        for(i=0;i<n;i++){
            t=0;
            for(j=0;j<n;j++){
                t+=ans[i][j];
                ans[i][j]=t;
            }
        }
        return ans;
    }
};