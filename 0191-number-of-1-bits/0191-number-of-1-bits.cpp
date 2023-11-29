class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i,j,k,t;
        i=__builtin_popcount(n);
        //cout<<i<<endl;
        return i;
    }
};