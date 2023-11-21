class Solution {
public:
    int garbageCollection(vector<string>& gar, vector<int>& tr) {
        int n=gar.size();
        int m=tr.size();
        int i,j,k,l,t=0;
        vector<int>pre(m+1,0);
        for(i=0;i<m;i++){
            pre[i+1]=tr[i]+pre[i];
        }
        k=0;
        l=0;
        int p=0;
        for(i=0;i<n;i++){
            for(j=0;j<gar[i].size();j++){
                t++;
                if(gar[i][j]=='M'){
                    k=i;
                }
                else if(gar[i][j]=='G')l=i;
                else p=i;
            }
        }
        t+=pre[k]+pre[l]+pre[p];
        return t;
    }
};