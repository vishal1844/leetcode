class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,j,k,l,m,t=0;
        int n=s.size()-1;
        while(s[n]==' ')n--;
        for(i=n;i>=0;i--){
            if(s[i]==' '){
                return n-i;
            }
        }
        return n-i;
    }
};