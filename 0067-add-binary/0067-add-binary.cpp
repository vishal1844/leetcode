class Solution {
public:
    string addBinary(string a, string b) {
        int l=a.size()-1;
        int h=b.size()-1;
        int i,c=0,j,k;
        string s="";
        while(l>=0||h>=0||c==1){
            if(l>=0) c+=(a[l--]-'0');
            if(h>=0) c+=(b[h--]-'0');
            s+=char(c%2+'0');
            c=c/2;
        }
         reverse(s.begin(),s.end());
        return s;
    }
};