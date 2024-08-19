class Solution {
public:
    int minSteps(int n) {
        if(n==1)return 0;
        if(n==2)return 2;
        int i,j,k,l,m;
        vector<int>a(n+1,0);
        a[2]=2;
        for(i=3;i<=n;i++){
            k=i/2;
            while(k>=1){
                if(i%k==0){
                    int steps=a[k];
                    int paste=i/k-1;
                    int copy=1;
                    a[i]=steps+copy+paste;
                    break;
                }
                else k--;
            }
        }
        return a[n];
    }
};