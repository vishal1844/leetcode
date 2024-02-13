class Solution {
public:
    int minOperations(int n) {
        int i,j,k,l,m;
        long long t=0;
        vector<int>v(n,0);
        for(i=0;i<n;i++){
            k=2*i+1;
            //t+=k;
            v[i]=k;
        }
        t=n;
        //t=sqrt(t);
        //cout<<t<<" ";
        l=0;
        i=0;
        j=n-1;
        while(v[i]<t){
            l+=abs(v[i]-t);
            i++;
        }
        return l;
    }
};