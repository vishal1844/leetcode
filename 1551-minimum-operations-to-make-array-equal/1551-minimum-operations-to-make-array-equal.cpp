class Solution {
public:
    int minOperations(int n) {
        int i,j,k,l,m;
        long long t=0;
       // vector<int>v(n,0);
        for(i=0;i<n;i++){
            k=2*i+1;
            //t+=k;
            if(k<n)
            t+=k;
            else break;
        }
        long long p=n*i;
        p-=t;
        return p;
    }
};


// /* TC-O(n) where n=length of array;