class Solution {
public:
    bool checkPowersOfThree(int n,int p=1) {
        if(n==0)return 1;
        if(n<p)return 0;
        return checkPowersOfThree(n,p*3)||checkPowersOfThree(n-p,p*3);
    }
};