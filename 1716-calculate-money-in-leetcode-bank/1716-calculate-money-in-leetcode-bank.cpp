class Solution {
public:
    int totalMoney(int n) {
        int i=0,j,k,l,m,t=0;
        while(n>0){
            k=min(7,n);
            n-=7;
            k=((k+i)*(k+i+1))/2;
            l=(i*(i+1))/2;
            i++;
            t+=(k-l);
        }
        return t;
    }
};