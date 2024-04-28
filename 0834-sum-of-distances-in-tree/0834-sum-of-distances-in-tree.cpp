class Solution {
    vector<int>res;
    vector<int>count;
    long long root_res=0;
    int dfs(vector<int>adj[],int root,int prev,int dist){
        //res[root]+=dist;
        for(auto itr:adj[root]){
            if(itr==prev)continue;
            count[root]+=dfs(adj,itr,root,dist+1);
            res[root]+=res[itr]+count[itr];
        }
        return count[root];
        
    }
    void dfs2(vector<int>adj[],int root,int pre,int n){
        for(auto itr:adj[root]){
            if(itr!=pre){
            res[itr]=res[root]+n-count[itr]-count[itr];
                dfs2(adj,itr,root,n);
            }
        }
    }
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(auto itr:edges){
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
        }
        res.resize(n,0);
        count.resize(n,1);
        dfs(adj,0,-1,0);
        // for(auto itr:count){
        //     cout<<itr<<" ";
        // }
        // cout<<root_res<<endl;
        dfs2(adj,0,-1,n);
        return res;
        
    }
};