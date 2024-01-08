class Solution {
public:
    int minimumDeletions(string s) {
        int i,j,k=0,l,m=0,t=0;
        vector<int>v(s.size(),0);
        vector<int>vec(s.size(),0);
        for(i=0;i<s.size();i++){
            v[i]=m;
            if(s[i]=='b')
            m++;
        }
        m=0;
        for(i=s.size()-1;i>=0;i--){
            vec[i]=m;
            if(s[i]=='a')
            m++;
        }
        t=s.size();
        for(i=0;i<s.size();i++){
            t=min(t,v[i]+vec[i]);
        }
        return t;
    }
};