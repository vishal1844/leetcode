class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int i,j,k,l,m,t,s=0;
        map<pair<int,int>,int>mp;
        vector<pair<int,int>>v,vec;
        for(i=0;i<img1.size();i++){
            for(j=0;j<img1[0].size();j++){
                if(img1[i][j]){
                    v.push_back({i,j});
                }
                if(img2[i][j]){
                    vec.push_back({i,j});
                }
            }
        }
        for(auto itr:v){
            for(auto itr1:vec){
                mp[{(itr.first-itr1.first),(itr.second-itr1.second)}]++;
            }
        }
        for(auto itr:mp){
             s=max(s,itr.second);
        }
        return s;
    }
};