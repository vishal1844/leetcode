class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int i,j,k,l,m,t=0;
        k=str1.size();
        l=str2.size();
        string s;
        m=__gcd(k,l);
        if(str1+str2!=str2+str1){
            return s;
        }
        return str1.substr(0,m);
    }
};