class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i,j;
        unordered_map<char,char>mp,m;
        for(i=0;i<s.size();i++){
            //  if(mp.find(s[i])!=mp.end()||m.find(t[i])!=m.end()){
            //     if(mp[s[i]]!=t[i]||m[t[i]]!=s[i])
            //         return 0;
            // }
            if(mp[s[i]]&&mp[s[i]]!=t[i]) return 0;
            if(m[t[i]]&&m[t[i]]!=s[i]) return 0;
            mp[s[i]]=t[i];
                   m[t[i]]=s[i];
        }
        return 1;
    }
};