class Solution {
public:
    bool halvesAreAlike(string s) {
        int i,j,k,l,m,t=0,c=0;
        int n=s.size();
        for(i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                if(i<n/2){
                    c++;
                }
                else
                    t++;
            }
        }
        //cout<<c<<t;
        if(c==t) return true;
        return false;
    }
};