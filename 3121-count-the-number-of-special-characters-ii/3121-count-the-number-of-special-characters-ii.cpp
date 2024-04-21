class Solution {
public:
    int numberOfSpecialChars(string word) {
        int i,j,k,l,m,t=0;
        map<char,int>mp,mps;
        for(i=0;i<word.size();i++){
            char ch=tolower(word[i]);
            if(word[i]>='a'&&word[i]<='z'){
                mp[ch]=i;
            }
            else{
                if(mps.find(ch)==mps.end()){
                    mps[ch]=i;
                }
                // else{
                //     mps[ch]=min(i,mps[ch]);
                // }
            }
        }
        for(auto itr:mp){
            if(mps.find(itr.first)!=mps.end()){
                if(itr.second<mps[itr.first]){
                    t++;
                }
            }
        }
        return t;
        
    }
};
