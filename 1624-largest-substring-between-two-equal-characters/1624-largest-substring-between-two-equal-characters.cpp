class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n=s.size();
        int i,j,k,l,m,t=-1;
        vector<int>v(26,-1);
        for(i=0;i<n;i++){
            if(v[s[i]-'a']!=-1){
                t=max(t,i-v[s[i]-'a']-1);
            }
            else{
                v[s[i]-'a']=i;
            }
        }
        if(t==-1)return -1;
        return t;
    }
};