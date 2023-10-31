class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>v;
        int i,j,k,l,m,t;
        v.push_back(pref[0]);
        for(i=1;i<pref.size();i++){
            t=pref[i-1]^pref[i];
            v.push_back(t);
        }
        return v;
    }
};