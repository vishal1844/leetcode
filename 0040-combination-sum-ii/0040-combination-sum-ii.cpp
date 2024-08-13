class Solution {
    vector<vector<int>>ans;
    vector<int>v;
    void solve(int i,int n,vector<int>&a,int target){
        if(target==0){
            ans.push_back(v);
            return;
        }
        if(i>=n)return;
        if(target<0)return;
        for(int k=i;k<n;k++){
            if(k>i&&a[k]==a[k-1])continue;
            if(target>=a[k]){
                v.push_back(a[k]);
                solve(k+1,n,a,target-a[k]);
                v.pop_back();
            }
        }
        return;
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        int i,j,k,l,m,t=0;
        solve(0,c.size(),c,target);
        return ans;
    }
};