class Solution {
public:
    int findComplement(int num) {
        int i,j,l,m,t=0;
        long long k=1;
        while(num!=0){
            if(num%2==0)
              t+=k;  
            k*=2;
            num/=2;
        }
        return t;
    }
};