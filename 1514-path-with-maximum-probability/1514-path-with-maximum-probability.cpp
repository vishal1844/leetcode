#include <vector>
#include <queue>
#include <utility>
using namespace std;

class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& s, int start, int end) {
        // Construct the adjacency list
        vector<pair<int, double>> adj[n];
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back({edges[i][1], s[i]});
            adj[edges[i][1]].push_back({edges[i][0], s[i]});
        }

        // Queue for BFS
        queue<pair<int, double>> q;
        vector<double> probabilities(n, 0.0);
        probabilities[start] = 1.0;
        q.push({start, 1.0});

        while (!q.empty()) {
            auto [node, currProb] = q.front();
            q.pop();

            for (auto& [neighbor, edgeProb] : adj[node]) {
                double newProb = currProb * edgeProb;
                if (newProb > probabilities[neighbor]) {
                    probabilities[neighbor] = newProb;
                    q.push({neighbor, newProb});
                }
            }
        }

        return probabilities[end];
    }
};
