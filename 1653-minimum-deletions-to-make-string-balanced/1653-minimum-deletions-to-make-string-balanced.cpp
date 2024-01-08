class Solution {
public:
    int minimumDeletions(string s) {
        int i,j,k,l=0,m=0,t=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='a')m++;
        }
        t=s.size();
        for(i=0;i<s.size();i++){
            if(s[i]=='a')m--;
            t=min(t,m+l);
            if(s[i]=='b')l++;
        }
        return t;
    }
};