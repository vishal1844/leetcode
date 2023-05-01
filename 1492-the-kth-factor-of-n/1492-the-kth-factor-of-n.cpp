class Solution {
public:
    int kthFactor(int n, int k) {
        int i,j,l,m,t=0;
        for(i=1;i<=n/2;i++){
            if(n%i==0){
                t++;
                if(t==k){
                    return i;
                }
            }
        }
        t++;
        if(t==k)return n;
        return -1;
        
    }
};