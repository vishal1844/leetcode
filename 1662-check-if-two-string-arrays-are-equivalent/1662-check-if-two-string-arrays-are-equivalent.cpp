class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i,j,k,l,m=0;
        i=0;
        j=0;
        string s,str;
        for(auto itr:word1){
            s+=itr;
        }
        for(auto it:word2){
            str+=it;
        }
        if(s==str)return true;
        return false;
    }
};