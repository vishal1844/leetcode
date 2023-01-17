class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int t=0,k=0;
        int i,j;
        for(i=0;i<s.size();i++){
            if(s[i]=='0')
                t++;
            else
                k++;
            t=min(t,k);
        }
        return t;
    }
};