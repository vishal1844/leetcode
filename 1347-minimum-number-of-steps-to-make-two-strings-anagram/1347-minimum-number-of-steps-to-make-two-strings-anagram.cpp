class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size();
        map<int,int>mp;
        for(auto itr:s){
            mp[itr]++;
        }
        for(auto itr:t){
            if(mp.find(itr)!=mp.end()){
                mp[itr]--;
                if(mp[itr]==0){
                    mp.erase(itr);
                }
                n--;
            }
        }
        return n;
    }
};