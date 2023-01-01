class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i,j,k,l,m,t=0;
        vector<string>v;
        string st="";
        for(i=0;i<s.size();i++){
            st="";
            while(s[i]!=' '&&i<s.size()){
                st+=s[i];
                i++;
            }
            v.push_back(st);
        }
        if(v.size()!=pattern.size())return false;
    unordered_map<char,string>sts;
        unordered_map<string,char>p;
    for(i=0;i<pattern.size();i++){
        if(sts.find(pattern[i])!=sts.end()){
            if(sts[pattern[i]]!=v[i])
                return false;
        }
        if(p.find(v[i])!=p.end()){
            if(p[v[i]]!=pattern[i])
                return false;
        }
        else{
            sts[pattern[i]]=v[i];
            p[v[i]]=pattern[i];
        }
    }
        return true;
    }
};