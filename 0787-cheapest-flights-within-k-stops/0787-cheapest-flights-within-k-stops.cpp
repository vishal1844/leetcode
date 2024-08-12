class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& f, int src, int dst, int k) {
        queue<pair<int,pair<int,int>>>q;
        int i,j,l,m,t=0;
        vector<pair<int,int>>adj[n];
        for(auto itr:f){
            int s=itr[0];
            int d=itr[1];
            l=itr[2];
            adj[s].push_back({d,l});
        }
        vector<int>dist(n,INT_MAX);
        q.push({0,{0,src}});
        while(!q.empty()){
            auto itr=q.front();
            q.pop();
             int stops=itr.first;
            int score=itr.second.first;
            int node=itr.second.second;
            if(stops<=k){
            for(auto itr:adj[node]){
                if(score+itr.second<dist[itr.first]){
                    dist[itr.first]=score+itr.second;
                    q.push({stops+1,{score+itr.second,itr.first}});
                                    
                }
            }
            }
        }
        if(dist[dst]==INT_MAX)return -1;
        return dist[dst];
    }
};