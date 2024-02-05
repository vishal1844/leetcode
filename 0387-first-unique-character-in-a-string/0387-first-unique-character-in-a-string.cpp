class Solution {
public:
    int firstUniqChar(string s) {
        int i,k,j,l,m,t=INT_MAX;
        map<char,pair<int,int>>mp;
        for(i=0;i<s.size();i++){
            mp[s[i]]={++mp[s[i]].first,i};
        }
        for(auto itr:mp){
            if(itr.second.first==1){
                t=min(t,itr.second.second);
            }
        }
        if(t==INT_MAX)return -1;
        return t;
    }
};