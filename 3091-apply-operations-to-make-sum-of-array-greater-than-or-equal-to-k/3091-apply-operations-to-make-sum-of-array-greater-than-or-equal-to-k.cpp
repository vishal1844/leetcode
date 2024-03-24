class Solution {
public:
    int minOperations(int k) {
        int i,j,l,m,t=0;
        i=sqrt(k);
        if((i*i)!=k){
            i++;
        }
        //i--;
        t+=i-1;
        l=k/i;
        if(k%i!=0){
            l++;
        }
        t+=l-1;
        return t;
        
    }
};