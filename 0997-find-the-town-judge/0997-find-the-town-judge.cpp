class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int i,j,k,l,m,t=0;
        vector<pair<int,int>>v(n+1,{0,0});
        for(i=0;i<trust.size();i++){
           v[trust[i][0]].first++;
            v[trust[i][1]].second++;
        }
        for(i=1;i<=n;i++){
            if(v[i].first==0&&v[i].second==n-1)
                return i;
        }
        return -1;
    }
};