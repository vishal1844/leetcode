class Solution {
public:
    int findComplement(int num) {
        int i,j,l,m,t=0;
        long long k=0;
        while(num!=0){
            if(num%2==0)
              t+=1<<k;  
            k++;
            num/=2;
        }
        return t;
    }
};