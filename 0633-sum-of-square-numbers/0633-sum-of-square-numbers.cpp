class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long int i=0;i*i<=c;i++){
            double j=(double)sqrt(c-(i*i));
            if(j==(int)j)return true;
        }
        return false;
    }
};