class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        set<int>adj[n];
        int i,j,k,l,m,t=0;
        for(i=0;i<roads.size();i++){
            adj[roads[i][0]].insert(roads[i][1]);
            adj[roads[i][1]].insert(roads[i][0]);
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                k=0;
                if(adj[i].count(j)){
                    k++;
                }
                l=adj[i].size()+adj[j].size();
                if(k){
                    l--;
                }
                t=max(t,l);
            }
        }
        return t;
    }
};