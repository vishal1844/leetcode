class Solution {
public:
    int minSteps(int n) {
        int d=2;
        int i,j,k,l,t=0;
        while(n>1){
            while(n%d==0){
                t+=d;
                n/=d;
            }
            d++;
        }
        return t;
    }
};