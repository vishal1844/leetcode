class Graph {
    //int k;
    //vector<vector<pair<int,int>>>adj;
public:
    vector<vector<pair<int,int>>>adj;
    Graph(int n, vector<vector<int>>& edges) {
       // k=n;
        adj.resize(n);
        //vector<pair<int,int>>adj[n];
        for(auto itr:edges){
            adj[itr[0]].push_back({itr[1],itr[2]});
        }
    }
    
    void addEdge(vector<int> edge) {
        adj[edge[0]].push_back({edge[1],edge[2]});
    }
    int shortestPath(int node1, int node2) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,node1});
        int k=adj.size();
        vector<int>v(k,INT_MAX);
        v[node1]=0;
        while(!pq.empty()){
            auto itr=pq.top();
            pq.pop();
            int p=itr.first;
            int l=itr.second;
            //if(p>v[l])continue;
            if(l==node2)return p;
            for(auto &it:adj[l]){
                int a=it.first;
                int b=it.second;
                if(p+b<v[a]){
                    v[a]=p+b;
                    pq.push({p+b,a});
                    //cout<<b<<" ";
                }
            }
            //return -1;
        }
        return -1;
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */