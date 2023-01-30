class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1,i,j,k,l,m;
        if(n==0){
            return 0;
        }
        if(n==1||n==2)
            return 1;
        for(i=3;i<=n;i++){
            k=a+b+c;
            a=b;
            b=c;
            c=k;
        }
        return c;
    }
};