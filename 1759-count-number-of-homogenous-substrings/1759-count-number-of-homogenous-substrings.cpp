class Solution {
public:
    int countHomogenous(string s) {
        int i,j=0,t=0;
        for(i=0;i<s.size();i++){
            j++;
            t=(t+j)%1000000007;
            if(i+1<s.size()&&s[i]!=s[i+1]){
                j=0;
            }
        }
        return t;
    }
};