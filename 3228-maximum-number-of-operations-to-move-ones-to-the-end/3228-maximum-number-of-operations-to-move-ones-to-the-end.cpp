class Solution {
public:
    int maxOperations(string s) {
        int i,j,k,l=0,m,t=0;
        for(i=s.size()-1;i>=0;i--){
            if(i==s.size()-1&&s[i]=='0')t++;
            else if(i<s.size()-1&&(s[i]=='0'&&s[i+1]=='1'))t++;
            else if(s[i]=='0')continue;
            else{
                if(t){
                    l+=t;
                }
            }
        }
        return l;
    }
};