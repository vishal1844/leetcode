class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int i,j,k,l,t,m;
        if(word1.size()!=word2.size()){
            return false;
        }
        vector<int>v(26,0),vec(26,0);
        //set<int>st(word1.begin(),word1.end());
        //set<int>sts(word2.begin(),word2.end());
        for(i=0;i<word1.size();i++){
            v[word1[i]-'a']++;
        }
        for(i=0;i<word2.size();i++){
            vec[word2[i]-'a']++;
        }
        sort(v.begin(),v.end());
        sort(vec.begin(),vec.end());
        if(set<int>(word1.begin(),word1.end())==set<int>(word2.begin(),word2.end())){
            if(v==vec)
                return true;
            return false;
        }
        return false;
    }
};