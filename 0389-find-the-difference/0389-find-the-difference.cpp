class Solution {
public:
    char findTheDifference(string s, string t) {
        int i,j,k,l,m;
        char c;
        vector<char>v;
        for(i=0;i<s.size();i++){
            v.push_back(s[i]);
        }
        for(i=0;i<t.size();i++){
            v.push_back(t[i]);
        }
        c=v[0];
        for(i=1;i<v.size();i++){
            c^=v[i];
        }
        return c;
    }
};