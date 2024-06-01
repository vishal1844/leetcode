class Solution {
public:
    int scoreOfString(string s) {
        int i,j,k,l,t=0;
        for(i=1;i<s.size();i++){
            t+=abs(s[i]-s[i-1]);
        }
        return t;
    }
};