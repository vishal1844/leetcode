class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
        for(auto itr:s){
            mp[itr]++;
        }
        for(auto itr:t){
            if(mp.count(itr)){
                mp[itr]--;
                if(mp[itr]==0){
                    mp.erase(itr);
                }
            }
            else{
               return 0; 
            }
        }
        if(mp.size()>0){
            return 0;
        }
        return 1;
    }
};