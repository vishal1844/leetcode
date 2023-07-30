//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
    bool dfs(int i,vector<int>&visit,vector<int>&path,vector<int>adj[]){
        visit[i]=1;
        path[i]=1;
        //bool flag=0;
        for(auto itr:adj[i]){
            if(!visit[itr]){
                if(dfs(itr,visit,path,adj)==true)return true;
            }
            else if(path[itr]==1){
                //flag=1;
                //path[itr]=0;
                return true;
                //return;
            }
            else{
                path[itr]=0;
                //return true;
                //break;
            }
        }
        //if(flag)return;
        path[i]=0;
        return false;
    }
  public:
    vector<int> eventualSafeNodes(int v, vector<int> adj[]) {
        // code here
        vector<int>visit(v,0),path(v,0);
        for(int i=0;i<v;i++){
            if(!visit[i]){
                dfs(i,visit,path,adj);
            }
        }
        vector<int>ans;
        for(int i=0;i<v;i++){
            if(path[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
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
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends