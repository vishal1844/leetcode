class Solution {
    void dfs(int i,int j,vector<pair<int,int>>adj[],vector<vector<int>>&v,int sum){
        for(auto itr:adj[j]){
            if(v[i][itr.first]>sum+itr.second){
                v[i][itr.first]=itr.second+sum;
                dfs(i,itr.first,adj,v,sum+itr.second);
            }
        }
    }
public:
    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        vector<pair<int,int>>adj[26];
        int i,j,k,l,m,t=0;
        for(i=0;i<original.size();i++){
            k=original[i]-'a';
            l=changed[i]-'a';
            adj[k].push_back({l,cost[i]});
        }
        vector<vector<int>>v(26,vector<int>(26,1e9));
        for(i=0;i<26;i++){
            dfs(i,i,adj,v,0);
            // for(i=0;i<26;i++){
            //     for(j=0;j<26;j++){
            //         cout<<v[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
        }
        long long ans=0;
        for(i=0;i<source.size();i++){
            k=source[i]-'a';
            l=target[i]-'a';
            if(k!=l){
                if(v[k][l]==1e9)return -1;
                ans+=v[k][l];
            }
        }
        return ans;
        
        
    }
};