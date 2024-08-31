class Solution {
    private:
    long long dijkstraShortest(int n,vector<pair<int,int>>adj[],int s,int d){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,s});
        vector<long long>dist(n,2e9);
        dist[s]=0;
        while(!pq.empty()){
            auto itr=pq.top();
            pq.pop();
            long long dis=itr.first;
            int node=itr.second;
            if(node==d){
                return dis;
            }
            for(auto itr:adj[node]){
                if(itr.second+dis<dist[itr.first]){
                    dist[itr.first]=itr.second+dis;
                    pq.push({dist[itr.first],itr.first});
                }
            }
        }
        return 2e9;
        
    }
public:
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>>& edges, int source, int destination, int target) {
        vector<pair<int,int>>adj[n];
        for(auto itr:edges){
            if(itr[2]!=-1){
            adj[itr[0]].push_back({itr[1],itr[2]});
            adj[itr[1]].push_back({itr[0],itr[2]});
            }
        }
        long long t=dijkstraShortest(n,adj,source,destination);
        //cout<<t<<" ";
        if(t<target){
            return {};
        }
        else if(t==target){
            for(int i=0;i<edges.size();i++){
                if(edges[i][2]==-1){
                    edges[i][2]=2e9;
                }
            }
            return edges;
        }
        else{
            for(int i=0;i<edges.size();i++){
                if(edges[i][2]==-1){
                    adj[edges[i][0]].push_back({edges[i][1],1});
                    adj[edges[i][1]].push_back({edges[i][0],1});
                    edges[i][2]=1;
                    t=dijkstraShortest(n,adj,source,destination);
                    if(t<=target){
                        edges[i][2]+=(target-t);
                        i++;
                        while(i<edges.size()){
                            if(edges[i][2]==-1){
                                edges[i][2]=2e9;
                            }
                            i++;
                        }
                        return edges;
                    }
                }
            }
        }
        return {};
    }
};