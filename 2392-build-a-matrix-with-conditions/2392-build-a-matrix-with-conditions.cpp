class Solution {
    vector<int>kahn(int k,vector<vector<int>>&v){
        vector<int>adj[k+1];
        int i,j,l,m,t=0;
        vector<int>indegree(k+1);
        for(auto itr:v){
            adj[itr[0]].push_back(itr[1]);
            indegree[itr[1]]++;
        }
        queue<int>q;
        vector<int>ans;
        for(i=1;i<k+1;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            auto itr=q.front();
            q.pop();
            ans.push_back(itr);
            for(auto it:adj[itr]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        return ans;
    }
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rc, vector<vector<int>>& cc) {
        int i,j,l,m,t=0;
        vector<vector<int>>ans(k,vector<int>(k,0));
        vector<int>rowt=kahn(k,rc);
        if(rowt.size()!=k)return {};
        vector<int>colt=kahn(k,cc);
        if(colt.size()!=k)return {};
        for(i=0;i<rowt.size();i++){
            for(j=0;j<colt.size();j++){
                if(rowt[i]==colt[j]){
                    ans[i][j]=rowt[i];
                }
            }
        }
                        return ans;
        
    
    }
};