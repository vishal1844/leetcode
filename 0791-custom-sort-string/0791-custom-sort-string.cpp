class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        for(auto itr:order){
            mp[itr]++;
        }
        string str="";
        for(auto itr:s){
            if(mp.find(itr)!=mp.end()){
                mp[itr]++;
            }
            else{
                str+=itr;
            }
        }
        for(auto itr:order){
            while(mp[itr]>=2){
                str+=itr;
                mp[itr]--;
            }
        }
        return str;
    }
};