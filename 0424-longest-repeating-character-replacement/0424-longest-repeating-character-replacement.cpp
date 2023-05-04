class Solution {
public:
    int characterReplacement(string s, int k) {
        int i,j=0,l,m=0,t=0;
        map<char,int>mp;
        for(i=0;i<s.size();i++){
            t=max(t,++mp[s[i]]);
            if(i-j+1-t<=k){
                m=max(m,i-j+1);
            }
            else{
                mp[s[j]]--;
                j++;
            }
        }
        return m;
    }
};