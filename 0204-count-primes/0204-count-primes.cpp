class Solution {
public:
    int countPrimes(int n) {
        long long int i,j,k,l,m,t=0;
        vector<long long int>a(n+1,0);
        for(i=2;i<n;i++){
            if(a[i]==0){
                t++;
                a[i]=1;
                for(j=1ll*i*i;j<n;j+=i){
                    a[j]=1;
                }
            }
        }
        return t;
        
    }
};