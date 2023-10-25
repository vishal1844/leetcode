class Solution {
public:
    int kthGrammar(int n, int k) {
        int c=__builtin_popcount(k-1);
        if(c%2==0)return 0;
        return 1;
    }
};