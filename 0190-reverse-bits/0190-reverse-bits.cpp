class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        signed  int r,s=31;
        while(n!=0){
            r=n%2;
            res+=r<<s;
            n=n>>1;
            s--;
        }
        return res;
    }
};