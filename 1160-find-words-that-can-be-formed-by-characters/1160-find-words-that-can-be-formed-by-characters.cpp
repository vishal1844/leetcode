class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int i,j,k,l,m=0,t=0;
        map<char,int>mp;
        for(auto itr:chars){
            mp[itr]++;
        }
        for(i=0;i<words.size();i++){
            m=1;
            map<char,int>mps;
            for(auto itr:words[i]){
                mps[itr]++;
                if(mps[itr]>mp[itr]){
                    m=0;
                    break;
                }
            }
            if(m==1)t+=words[i].size();
        }
        return t;
    }
};