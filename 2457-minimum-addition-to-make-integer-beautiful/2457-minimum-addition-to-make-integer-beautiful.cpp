class Solution {
    long long sum(long long n){
        long long s=0,r;
        while(n!=0){
            r=n%10;
            s+=r;
            n=n/10;
        }
        return s;
    }
    
public:
    long long makeIntegerBeautiful(long long n, int target) {
        long long k,t,c=1,m=n;
        while(sum(n)>target){
            n=n/10+1;
            c*=10;
        }
        t=n*c-m;
        return t;
    }
};