class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        int i,j,k,l,m;
        for(i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        for(i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]]--;
            }
        }
        for(auto itr:mp){
            if(itr.second==1)
            //cout<<itr.first<<" "<<itr.second;
                return itr.first;
        }
        return t[0];
    }
};