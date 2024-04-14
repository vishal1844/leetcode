class Solution {
public:
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        vector<pair<int,int>>adj[n];
        int i,j,k,l,m,t=0;
        for(auto itr:edges){
            adj[itr[0]].push_back({itr[1],itr[2]});
            adj[itr[1]].push_back({itr[0],itr[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        vector<int>ans(n,-1);
        while(!pq.empty()){
            auto itr=pq.top();
            int time=itr.first;
            int node=itr.second;
            pq.pop();
            if(ans[node]!=-1)continue;
            ans[node]=time;
            for(auto itr:adj[node]){
                int newNode=itr.first;
                int newTime=itr.second+time;
                if(ans[newNode]==-1&&newTime<disappear[newNode]){
                    pq.push({newTime,newNode});
                }
            }
        }
        return ans;
        
    }
};