class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newi) {
        vector<vector<int>>v;
        int i,j,k,l,m,t=0;
        in.push_back(newi);
        sort(in.begin(),in.end());
        k=in[0][0];
        l=in[0][1];
        for(i=0;i<in.size();i++){
            if(in[i][0]<=l){
                k=min(k,in[i][0]);
                l=max(l,in[i][1]);
            }
            else{
                v.push_back({k,l});
                k=in[i][0];
                l=in[i][1];
            }
        }
        v.push_back({k,l});
        return v;
    }
};