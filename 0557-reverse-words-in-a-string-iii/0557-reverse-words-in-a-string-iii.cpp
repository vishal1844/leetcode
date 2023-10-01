class Solution {
public:
    string reverseWords(string s) {
        string st,str;
        int i,j,k,l,m,t=0;
        for(i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(str.begin(),str.end());
                st+=str;
                st+=' ';
                str="";
            }
            else{
                str+=s[i];
            }
        }
        reverse(str.begin(),str.end());
                st+=str;
        return st;
    }
};