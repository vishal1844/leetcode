class Solution {
public:
    void dfs(vector<vector<int>>&stones,int index,vector<bool>&visited){
        visited[index]=true;
        int i,j,k;
        for(i=0;i<stones.size();i++){
            if(visited[i]==false&&(stones[i][0]==stones[index][0]||stones[i][1]==stones[index][1])){
                dfs(stones,i,visited);
            }
        }
        
    }
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int i,j,k,l,t=0;
        if(stones.size()==1){
            return 0;
        }
        vector<bool>visited(n,false);
        for(i=0;i<n;i++){
            if(visited[i]==true) continue;
            dfs(stones,i,visited);
            t++;
        }
        return n-t;
    }
};