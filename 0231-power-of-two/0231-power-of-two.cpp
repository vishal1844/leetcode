class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0||n<0)return 0;
        //n=abs(n);
        if(n&(n-1))return 0;
        return 1;
    }
};