class Solution {
    void dfs(vector<vector<int>>&v,int node,vector<int>&vis){
        vis[node]=1;
        for(int i=0;i<v.size();i++){
            if(v[node][i]&&!vis[i]){
                dfs(v,i,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        int n=isConnected.size();
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(isConnected,i,vis);
                count++;
            }
        }
        return count;
    }
};