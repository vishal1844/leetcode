//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    bool dfs(int i,vector<int>&visit,vector<int>&path,vector<int>adj[]){
        visit[i]=1;
        path[i]=1;
        for(auto itr:adj[i]){
            if(!visit[itr]){
                if(dfs(itr,visit,path,adj)==true)return true;
            }
            if(visit[itr]==1&&path[itr]==1)return true;
        }
        path[i]=0;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int v, vector<int> adj[]) {
        vector<int>visit(v,0),path(v,0);
        for(int i=0;i<v;i++){
            if(!visit[i]){
                if(dfs(i,visit,path,adj)==true){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends