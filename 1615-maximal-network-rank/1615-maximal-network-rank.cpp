class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>adj[n];
        for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        }
        int t=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k=0;
                for(auto itr:adj[i]){
                    if(itr==j){
                        k++;
                        break;
                    }
                }
                for(auto itr:adj[j]){
                    if(itr==i){
                        k++;
                        break;
                    }
                }
                int sum=adj[i].size()+adj[j].size();
                if(k==2){
                    sum--;
                }
                t=max(t,sum);
            }
        }
        return t;
    }
};