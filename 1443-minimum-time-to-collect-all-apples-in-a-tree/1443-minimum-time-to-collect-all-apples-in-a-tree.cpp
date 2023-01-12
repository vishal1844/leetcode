class Solution { 
    private:
    int solve(int node,int par,vector<int>adj[],vector<bool>&has){
        int total=0;
         for(auto itr: adj[node]){
             if(itr==par)
                 continue;
             total+=solve(itr,node,adj,has);
         }
        if(node!=0 && (has[node] || total>0))
            total+=2;
        return total;
    }
public:
    int minTime(int n, vector<vector<int>>& e, vector<bool>& has) {
        vector<int>adj[n+1];
        for(int i=0;i<e.size();++i){
            adj[e[i][0]].push_back(e[i][1]);
            adj[e[i][1]].push_back(e[i][0]);
        }
        return solve(0,-1,adj,has);
    }
};