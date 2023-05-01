class Solution {
public:
    int kthFactor(int n, int k) {
        int i,j,l,m,t=0;
        for(i=1;i<=n;i++){
            if(n%i==0){
                t++;
                if(t==k){
                    return i;
                }
            }
        }
        return -1;
        
    }
};