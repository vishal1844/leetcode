class Solution {
public:
    int beautySum(string s) {
        int i,j,k,l,m=0,t=0;
        for(i=0;i<s.size();i++){
            unordered_map<char,int>mp;
            t=0;
            for(j=i;j<s.size();j++){
                mp[s[j]]++;
                t=max(t,mp[s[j]]);
                k=500;
                for(auto itr:mp){
                    k=min(k,itr.second);
                }
                m+=t-k;
            }
        }
        return m;
    }
};