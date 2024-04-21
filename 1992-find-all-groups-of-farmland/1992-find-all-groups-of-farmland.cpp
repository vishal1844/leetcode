class Solution {
    int a[4]={-1,1,0,0};
    int b[4]={0,0,-1,1};
    void solve(int i,int j,vector<vector<int>>&land,int&l,int&r){
        if(i<0||j<0||i>=land.size()||j>=land[0].size())return;
        land[i][j]=0;
        for(int p=0;p<4;p++){
            int newi=i+a[p];
            int newb=j+b[p];
            if(newi<0||newb<0||newi>=land.size()||newb>=land[0].size())continue;
            else if(land[newi][newb]==1){
                l=max(l,newi);
                r=max(r,newb);
                //land[newi][newb]=0;
                solve(newi,newb,land,l,r);
            }
        }
        return;
    }
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>v;
        int i,j,k,l,m,t=0;
        for(i=0;i<land.size();i++){
            for(j=0;j<land[0].size();j++){
                if(land[i][j]==1){
                    k=i;
                    l=j;
                    solve(i,j,land,k,l);
                    v.push_back({i,j,k,l});
                }
            }
        }
        return v;
    }
};