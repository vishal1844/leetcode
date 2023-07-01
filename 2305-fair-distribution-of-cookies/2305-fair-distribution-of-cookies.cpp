class Solution {
    int maxi=INT_MAX;
    void solve(int i,int n,vector<int>&v,vector<int>&ans,int k){
        if(i==n){
            maxi=min(maxi,*max_element(ans.begin(),ans.end()));
            return;
        }
        for(int j=0;j<k;j++){
            ans[j]+=v[i];
            solve(i+1,n,v,ans,k);
            ans[j]-=v[i];
        }
        return ;
    }
public:
    int distributeCookies(vector<int>& cookies, int k) {
        int n=cookies.size();
        vector<int>ans(n,0);
        solve(0,n,cookies,ans,k);
        return maxi;
    }
};