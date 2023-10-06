class Solution {
public:
    int integerBreak(int n) {
        if(n<=3)return n-1;
        int t=1;
        while(n>4){
            t*=3;
            n-=3;
        }
        return t*n;
    }
};