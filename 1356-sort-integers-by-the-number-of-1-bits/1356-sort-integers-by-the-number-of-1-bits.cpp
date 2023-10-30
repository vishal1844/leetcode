class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        for(auto itr:arr){
            int k=__builtin_popcount(itr);
            v.push_back({k,itr});
        }
        sort(v.begin(),v.end());
        vector<int>vec;
        for(auto itr:v){
            vec.push_back(itr.second);
        }
        return vec;
    }
};