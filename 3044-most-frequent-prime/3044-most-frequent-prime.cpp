bool primes(int n){
    //int n=stoi(s);
int i,j,k,l,t=0;
    for(i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
class Solution {
    int a[8]={-1,-1,0,+1,+1,+1,0,-1};
    int b[8]={0,+1,+1,+1,0,-1,-1,-1};
    string s;
    int r=0;
    map<int,int>mp;
    void solve(int i,int j,int newi,int newj,int n,int m,vector<vector<int>>&mat){
        if(i>=n||j>=m||i<0||j<0)return;
        r=r*10+mat[i][j];
       // s+=to_string(mat[i][j]);
        mp[r]++;
        solve(i+newi,j+newj,newi,newj,n,m,mat);
    }
public:
    int mostFrequentPrime(vector<vector<int>>& mat) {
        int i,j,k=0,l,t=-1;
        int q=-1;
        string p="-1";
        for(i=0;i<mat.size();i++){
            for(j=0;j<mat[0].size();j++){
                for(k=0;k<8;k++){
                    s="";
                    r=0;
                    r=r*10+mat[i][j];
                    solve(i+a[k],j+b[k],a[k],b[k],mat.size(),mat[0].size(),mat);
                }
            }
        }
        for(auto itr:mp){
            if(itr.first<=10)continue;
            if(primes(itr.first)){
                if(t<=itr.second&& itr.first>10){
                    t=itr.second;
                    q=itr.first;
                }
            }
        }
        return q;
    }
};