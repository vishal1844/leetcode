class Solution {
public:
    int minDeletions(string s) {
        int i,j,k,l,m,t=0;
        unordered_map<char,int>mp;
        vector<int>v;
        for(i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        unordered_set<int>st;
        for(auto itr:mp){
            v.push_back(itr.second);
            //st.insert(itr.second);
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++){
            k=v[i];
            if(st.count(v[i])){
                k=v[i];
                while(st.count(k)){
                    t++;
                    k--;
                }
            }
            if(k==0){
                continue;
            }
           st.insert(k);
        }
        return t;
    }
};