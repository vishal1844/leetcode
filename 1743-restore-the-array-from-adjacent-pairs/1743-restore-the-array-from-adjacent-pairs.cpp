class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& a) {
        unordered_map<int,int>mps;
        int i,j,k,t=0;
        vector<int>v;
        unordered_map<int,vector<int>>mp;
        for(i=0;i<a.size();i++){
            mps[a[i][0]]++;
            mps[a[i][1]]++;
            mp[a[i][0]].push_back(a[i][1]);
            mp[a[i][1]].push_back(a[i][0]);
        }
        for(auto itr:mps){
            if(itr.second==1){
                k=itr.first;
            }
        }
        v.push_back(k);
        unordered_set<int>st;
        st.insert(k);
        while(1){
            for(auto itr:mp[k]){
                if(!st.count(itr)){
                    v.push_back(itr);
                    st.insert(itr);
                    k=itr;
                    break;
                }
            }
            if(v.size()==a.size()+1)return v;
        }
        return v;
        
    }
};