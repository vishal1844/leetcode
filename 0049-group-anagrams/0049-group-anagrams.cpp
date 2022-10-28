class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int i,j,k,l,m,t;
        string s;
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>v;
        vector<string>vec;
        for(i=0;i<strs.size();i++){
            vec.push_back(strs[i]);
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(vec[i]);
        }
        for(auto itr:mp){
            v.push_back(itr.second);
        }
        return v;
        
    }
};