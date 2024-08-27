class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& s, int start, int end) {
        vector<pair<int,double>>adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],s[i]});
            adj[edges[i][1]].push_back({edges[i][0],s[i]});
        }
        int i,j,k,l,m,t=0;
        double ans=0.0;
        vector<double>dis(n,0.0);
        dis[start]=1.0;
        queue<pair<int,double>>q;
        q.push({start,1.0});
        while(!q.empty()){
            auto itr=q.front();
            q.pop();
            int node=itr.first;
            double dist=itr.second;
            for(auto itr:adj[node]){
                if(dist*itr.second>dis[itr.first]){
                    dis[itr.first]=dist*itr.second;
                    q.push({itr.first,itr.second*dist});
                }
            }
        }
        return dis[end];
        
        
    }
};