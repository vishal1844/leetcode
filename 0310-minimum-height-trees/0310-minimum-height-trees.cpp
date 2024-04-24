class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        int i,j,k,l,m,t=0;
        vector<int>adj[n];
        vector<int>indegree(n);
        for(auto itr:edges){
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
            indegree[itr[0]]++;
            indegree[itr[1]]++;
        }
        queue<int>q;
       // vector<int>visit(n,0);
        for(i=0;i<n;i++){
            if(adj[i].size()==1){
                q.push(i);
                //visit[i]=1;
            }
        }
        while(!q.empty()){
            m=q.size();
            ans.clear();
            for(i=0;i<m;i++){
                auto itr=q.front();
                q.pop();
                indegree[itr]--;
                for(auto it:adj[itr]){
                    indegree[it]--;
                    if(indegree[it]==1){
                        q.push(it);
                    }
                }
                ans.push_back(itr);
            }   
        }
        if(ans.size()==0){
            ans.push_back(0);
        }
        return ans;
    }
};