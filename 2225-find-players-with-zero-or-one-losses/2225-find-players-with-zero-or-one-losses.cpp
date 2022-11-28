class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int i,j,k,l,t;
        map<int,int>mp;
        vector<int>v,vec;
        for(auto itr:matches){
            if(!mp.count(itr[0])) mp[itr[0]]=0;
            mp[itr[1]]++;
        }
        for(auto itr:mp){
            if(itr.second==0){
                v.push_back(itr.first);
            }
            if(itr.second==1){
                vec.push_back(itr.first);
            }
        }
        return{v,vec};
    }
    ///////////see second submission .
};