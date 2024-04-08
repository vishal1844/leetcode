class Solution {
public:
    bool checkValidString(string s) {
        int i,j,k,l,m=0,t=0;
        int n=s.size();
        for(i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='*')m++;
            else m--;
            if(s[n-i-1]==')'||s[n-i-1]=='*')t++;
            else t--;
            if(t<0||m<0)return 0;
        }
        return 1;
    }
};