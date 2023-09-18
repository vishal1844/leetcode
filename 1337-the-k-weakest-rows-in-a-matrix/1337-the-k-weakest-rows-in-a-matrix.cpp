class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>v;
        int i,j;
        for(i=0;i<mat.size();i++){
            int t=0;
            for(j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)t++;
            }
            v.push_back({t,i});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};