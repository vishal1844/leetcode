class Solution {
    vector<set<int>> v;
    vector<int> visit;
    
    void dfs(int i, vector<int> adj[]) {
        visit[i] = 1;
        for (auto itr : adj[i]) {
            if (!visit[itr]) {
                dfs(itr, adj);
            }
            v[i].insert(itr);
            v[i].insert(v[itr].begin(), v[itr].end());
        }
    }
    
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        v.resize(n);
        visit.resize(n, 0);
        vector<vector<int>> ans(n);
        vector<int> adj[n];
        
        for (auto itr : edges) {
            adj[itr[1]].push_back(itr[0]);
        }
        
        for (int i = 0; i < n; i++) {
            if (!visit[i]) {
                dfs(i, adj);
            }
        }
        
        for (int i = 0; i < n; i++) {
            ans[i] = vector<int>(v[i].begin(), v[i].end());
        }
        
        return ans;
    }
};
