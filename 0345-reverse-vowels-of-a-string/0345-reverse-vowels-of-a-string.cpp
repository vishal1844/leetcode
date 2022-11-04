class Solution {
public:
    string reverseVowels(string s) {
        int i,j,k,l,m,t;
        l=0;
        k=s.size()-1;
        while(l<k){
            if((s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'||s[l]=='A'||s[l]=='E'||s[l]=='I'||s[l]=='O'||s[l]=='U')&&(s[k]=='a'||s[k]=='e'||s[k]=='i'||s[k]=='o'||s[k]=='u'||s[k]=='A'||s[k]=='E'||s[k]=='I'||s[k]=='O'||s[k]=='U')){
                swap(s[l],s[k]);
                l++;
                k--;
        }
            else if((s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'||s[l]=='A'||s[l]=='E'||s[l]=='I'||s[l]=='O'||s[l]=='U')&&(s[k]!='a'||s[k]!='e'||s[k]!='i'||s[k]!='o'||s[k]!='u'||s[k]!='A'||s[k]!='E'||s[k]!='I'||s[k]!='O'||s[k]!='U')){
                k--;
            }
            else
                l++;
    }
        return s;
    }
};