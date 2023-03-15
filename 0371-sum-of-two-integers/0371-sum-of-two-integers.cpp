class Solution {
public:
    int getSum(int a, int b) {
        int i=a|b;
        int j=a&b;
        return i+j;
    }
};