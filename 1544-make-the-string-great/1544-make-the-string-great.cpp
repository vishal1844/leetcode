class Solution {
public:
    string makeGood(string s) {
        int i,j,k,l,t;
        if(s.empty())
            return s;
        for(i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]-32||s[i]==s[i+1]+32){
                return makeGood(s.substr(0,i)+s.substr(i+2));
            }
        }
        return s;
    }
};