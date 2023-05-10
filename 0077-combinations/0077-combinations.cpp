class Solution {
    void solve(int ind,int n,int k,vector<vector<int>>&ans,vector<int>&vec,vector<int>v,vector<int>&visit){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
        for(int i=ind;i<n;i++){
            if(visit[i]==0){
            v.push_back(vec[i]);
                visit[i]=1;
            solve(i+1,n,k,ans,vec,v,visit);
            v.pop_back();
                visit[i]=0;
            }
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>vec,v;
        vector<int>visit(n,0);
        for(int i=1;i<=n;i++){
            vec.push_back(i);
        }
        solve(0,n,k,ans,vec,v,visit);
        return ans;
    }
};