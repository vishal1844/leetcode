class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int i,j,k,l,m,t=0;
        vector<int>v(n+1,0);
        vector<int>vec(n+1,0);
        for(i=0;i<trust.size();i++){
            v[trust[i][0]]++;
            vec[trust[i][1]]++;
        }
        for(i=1;i<=n;i++){
            if(v[i]==0&&vec[i]==n-1)return i;
        }
        return -1;
    }
};