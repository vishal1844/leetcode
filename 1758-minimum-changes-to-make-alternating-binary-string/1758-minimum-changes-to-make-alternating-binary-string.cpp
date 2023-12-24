class Solution {
public:
    int minOperations(string s) {
        int i,j,k,l,m=0,t=0;
        for(i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]=='0'){
                    t++;
                }
                else{
                    m++;
                }
            }
            else{
                if(s[i]=='1'){
                    t++;
                }
                else{
                    m++;
                }
            }
        }
        return min(m,t);
    }
};