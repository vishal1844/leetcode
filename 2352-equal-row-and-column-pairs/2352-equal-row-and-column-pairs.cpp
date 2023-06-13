class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mp;
        int i,j,sum=0,n=grid.size(),m=grid[0].size();
        for(i=0;i<n;i++){
            vector<int>v;
            for(j=0;j<m;j++){
                v.push_back(grid[i][j]);
            }
            mp[v]++;
        }
        for(i=0;i<n;i++){
            vector<int>v;
            for(j=0;j<m;j++){
                v.push_back(grid[j][i]);
            }
            if(mp.find(v)!=mp.end()){
                sum+=mp[v];
            }
        }
        return sum;
    }
};