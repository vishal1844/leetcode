class Solution {
    int reverse(int n){
        int r,s=0,t;
        while(n!=0){
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        return s;
    }
public:
    bool sumOfNumberAndReverse(int n) {
        int i,j,k,l,m,t,r;
        if(n==0){
            return 1;
        }
        for(i=n/2;i<=n;i++){
            t=reverse(i);
            if(t+i==n){
                return true;
            }
        }
        return false;
    }
};