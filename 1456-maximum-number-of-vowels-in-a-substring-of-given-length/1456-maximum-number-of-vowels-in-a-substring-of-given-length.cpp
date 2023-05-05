class Solution {
public:
    int maxVowels(string s, int k) {
        int i,j=0,t=0,l,m=0;
        for(i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                m++;
            }
        }
        t=max(t,m);
        for(;i<s.size();i++){
           if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                m--;
            }
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                m++;
            }
            t=max(t,m);
            j++;
            //cout<<m<<" ";
        }
        return t;
    }
};