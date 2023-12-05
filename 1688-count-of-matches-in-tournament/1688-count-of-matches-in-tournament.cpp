class Solution {
public:
    int numberOfMatches(int n) {
        int i,j,k,l,m,t=0;
        while(n>1){
            if(n&1){
                t+=(n-1)/2;
                n=(n-1)/2+1;
            }
            else{
                t+=n/2;
                n/=2;
            }
        }
        return t;
    }
};