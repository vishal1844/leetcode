//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    void dfs(int i,vector<int>&visit,vector<int>adj[],vector<int>&ans){
        visit[i]=1;
        ans.push_back(i);
        for(auto itr:adj[i]){
            if(!visit[itr]){
                dfs(itr,visit,adj,ans);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int>visit(v+1);
        vector<int>ans;
        int i=0;
        for(int i=0;i<v;i++){
            if(!visit[i]){
                dfs(i,visit,adj,ans);
          }
       }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends