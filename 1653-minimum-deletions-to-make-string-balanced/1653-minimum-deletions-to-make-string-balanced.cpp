class Solution {
public:
    int minimumDeletions(string s) {
        int i,j,k,l=0,m=0,t=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='a'){
                if(m){
                    m--;
                    t++;
                }
            }
            else{
                m++;
            }
        }
        return t;
    }
};