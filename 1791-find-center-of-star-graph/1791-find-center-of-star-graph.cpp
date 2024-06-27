class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int i,j,k,l,m,t=0;
        map<int,int>mp;
        mp[edges[0][0]]++;
        mp[edges[0][1]]++;
        if(mp[edges[1][0]]==1)return edges[1][0];
        return edges[1][1];
    }
};