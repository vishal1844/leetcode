class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
       // vector<int>v;
        vector<int>adj[groupSizes.size()+1];
        for(int i=0;i<groupSizes.size();i++){
            adj[groupSizes[i]].push_back(i);
            if(adj[groupSizes[i]].size()==groupSizes[i]){
                ans.push_back(adj[groupSizes[i]]);
                adj[groupSizes[i]].clear();
            }
        }
        return ans;
        
    }
};