class Solution {
    vector<int>vis;
    long long ans=0;
    int dfs(int i,int n,vector<int>adj[n],int seats){
       vis[i]=1;
        int t=1;
        for(auto itr:adj[i]){
            if(vis[itr])continue;
            t+=dfs(itr,n,adj,seats);
        }
        if(i!=0){
            ans+=ceil(t/(seats*1.0));
        }
        return t;
    }
public:
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        long long t=0;
        int n=roads.size();
        int i,j,k,l,m;
        vis.resize(n+1,0);
        vector<int>adj[n+1];
        for(auto itr:roads){
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
        }
        dfs(0,n+1,adj,seats);
        return ans;
        
    }
};