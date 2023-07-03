class Solution {
public:
    bool buddyStrings(string s, string goal) {
        map<char,int>mps,mp;
        if(s.size()!=goal.size())return 0;
        int t=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                t++;
            }
            if(t>2)return 0;
        }
        for(auto itr:s){
            mp[itr]++;
        }
        for(auto itr:goal){
            mps[itr]++;
        }
        if(mp!=mps)return 0;
        if(t==2)return 1;
        for(auto itr:mp){
            if(itr.second>=2)return 1;
        }
        return 0;
    }
};