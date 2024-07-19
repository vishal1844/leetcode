class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int i,j,k,l,m,t=0;
        vector<pair<int,pair<int,int>>>v;
        vector<int>vec;
        for(i=0;i<matrix[0].size();i++){
            t=0;
            for(j=0;j<matrix.size();j++){
                if(t<matrix[j][i]){
                    k=i;
                    l=j;
                    t=matrix[j][i];
                }
            }
            v.push_back({t,{k,l}});
        }
        for(i=0;i<v.size();i++){
            m=INT_MAX;
            l=v[i].second.second;
            t=v[i].first;
            for(j=0;j<matrix[0].size();j++){
                if(m>matrix[l][j]){
                    m=matrix[l][j];
                }
            }
            if(m==t){
                vec.push_back(t);
            }
        }
        return vec;
        
    }
};