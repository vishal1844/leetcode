class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,res=0;
        //unordered_map<char,int>mp;
        vector<int>mp(256,-1);
        for(r=0;r<s.size();r++){
            if(mp[s[r]]>-1){
                l=max(l,mp[s[r]]+1);
            }
            mp[s[r]]=r;
            res=max(res,r-l+1);
        }
        return res;
    }
};