#include <vector>
#include <queue>
#include <limits.h>

class Solution {
public:
    int findTheCity(int n, std::vector<std::vector<int>>& edges, int d) {
        std::vector<std::vector<std::pair<int, int>>> adj(n);
        for (const auto& edge : edges) {
            int i = edge[0];
            int j = edge[1];
            int k = edge[2];
            adj[i].emplace_back(j, k);
            adj[j].emplace_back(i, k);
        }

        auto bfs = [&](int start) {
            std::vector<int> dist(n, INT_MAX);
            std::queue<int> q;
            q.push(start);
            dist[start] = 0;

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (const auto& [v, weight] : adj[u]) {
                    if (dist[u] + weight <= d && dist[u] + weight < dist[v]) {
                        dist[v] = dist[u] + weight;
                        q.push(v);
                    }
                }
            }

            int reachableCities = 0;
            for (int i = 0; i < n; ++i) {
                if (i != start && dist[i] <= d) {
                    ++reachableCities;
                }
            }

            return reachableCities;
        };

        int minReachableCities = INT_MAX;
        int city = -1;

        for (int i = 0; i < n; ++i) {
            int reachableCities = bfs(i);
            if (reachableCities < minReachableCities || (reachableCities == minReachableCities && i > city)) {
                minReachableCities = reachableCities;
                city = i;
            }
        }

        return city;
    }
};
