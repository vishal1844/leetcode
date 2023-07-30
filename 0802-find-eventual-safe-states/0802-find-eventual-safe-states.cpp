class Solution {
    private:
    bool dfs(int node,vector<int>&visit,vector<int>&path,vector<int>adj[]){
        visit[node]=1;
        path[node]=1;
        for(auto itr:adj[node]){
            if(!visit[itr]){
                if(dfs(itr,visit,path,adj)==true){
                    return true;
                }
            }
            else if(path[itr]==1){
                return true;
            }
            else{
                path[itr]=0;
                //break;
            }
        }
        path[node]=0;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n];
        vector<int>visited(n,0),path(n,0);
        for(int i=0;i<n;i++){
            for(auto itr:graph[i]){
                adj[i].push_back(itr);
            }
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,visited,path,adj);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(path[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};