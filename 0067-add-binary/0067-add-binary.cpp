class Solution {
public:
    string addBinary(string a, string b) {
        int i,j,k,l,m,t=0;
        int n=a.size()-1;
        string s;
        m=b.size()-1;
        while(n>=0||m>=0||t==1){
            l=0;
            if(n>=0){
                l+=a[n]-'0';
            }
            if(m>=0){
                l+=b[m]-'0';
            }
            l+=t;
            if(l%2==0){
                s+='0';
            }
            else{
                s+='1';
            }
            t=l/2;
            n--;
            m--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};