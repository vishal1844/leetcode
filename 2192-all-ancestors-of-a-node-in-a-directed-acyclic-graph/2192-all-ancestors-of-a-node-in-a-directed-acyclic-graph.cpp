#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> ans(n);
        vector<set<int>> ancestors(n);
        vector<vector<int>> adj(n);

        // Build the adjacency list
        for (auto& edge : edges) {
            adj[edge[1]].push_back(edge[0]);
        }

        // Perform a BFS/DFS to gather ancestors
        for (int i = 0; i < n; ++i) {
            gatherAncestors(i, adj, ancestors);
        }

        // Convert sets of ancestors to sorted vectors
        for (int i = 0; i < n; ++i) {
            ans[i] = vector<int>(ancestors[i].begin(), ancestors[i].end());
        }

        return ans;
    }

private:
    void gatherAncestors(int node, vector<vector<int>>& adj, vector<set<int>>& ancestors) {
        for (int parent : adj[node]) {
            if (ancestors[node].insert(parent).second) { // If parent was newly inserted
                gatherAncestors(parent, adj, ancestors); // Recursively gather ancestors
                ancestors[node].insert(ancestors[parent].begin(), ancestors[parent].end()); // Add all ancestors of parent
            }
        }
    }
};
