class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>st;
        int i,j,k,l,m,t;
        for(i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto itr:mp){
            if(st.count(itr.second)){
                return false;
            }
            st.insert(itr.second);
        }
        return true;
    }
};