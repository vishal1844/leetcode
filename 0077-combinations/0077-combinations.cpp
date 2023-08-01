class Solution {
    vector<vector<int>>ans;
    void solve(int i,int n,int k,vector<int>&v){
        if(v.size()==k||i>n){
            if(v.size()==k){
                ans.push_back(v);
            }
            return;
        }
        for(int l=i;l<=n;l++){
            v.push_back(l);
            solve(l+1,n,k,v);
            v.pop_back();
        }
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        solve(1,n,k,v);
        return ans;
    }
};