class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_set<int>st;
        unordered_map<int,int>mp;
        int i,j,k,l,m,t;
        vector<vector<int>>v;
        vector<int>vec,veci;
        for(i=0;i<matches.size();i++){
            st.insert(matches[i][0]);
        }
        for(i=0;i<matches.size();i++){
            mp[matches[i][1]]++;
        }
        for(auto itr:mp){
            if(st.find(itr.first)!=st.end()){
                if(itr.second>=2){
                    st.erase(itr.first);
                }
                else{
                    vec.push_back(itr.first);
                    st.erase(itr.first);
                }
            }
            else if(itr.second==1){
                vec.push_back(itr.first);
            }
        }
        sort(vec.begin(),vec.end());
        for(auto itr:st){
            veci.push_back(itr);
        }
        sort(veci.begin(),veci.end());
        v.push_back(veci);
        v.push_back(vec);
        return v;
    }
};