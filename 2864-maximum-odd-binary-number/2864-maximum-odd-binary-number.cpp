class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int i,j,k=0,l,m,t=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='1'){
                t++;
            }
            else{
                k++;
            }
        }
        string st;
        t--;
        while(t--){
            st+='1';
        }
        while(k--){
            st+='0';
        }
        st+='1';
        return st;
    }
    
};