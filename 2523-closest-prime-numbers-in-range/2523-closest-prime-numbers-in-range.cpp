class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
         int i,j,k,l,m,t=0;
        vector<int>v;
       // set<int>st;
        for(i=left;i<=right;i++){
            k=0;
            for(j=2;j*j<=i;j++){
                if(i%j==0){
                    k=1;
                    break;
                }
            }
            if(k==0&&i!=1){
                v.push_back(i);
            }
        }
        if(v.size()<2){
            return{-1,-1};
        }
        long long int mini=INT_MAX;
        for(i=0;i<v.size()-1;i++){
            l=v[i+1]-v[i];
            if(l<mini){
                mini=l;
                m=v[i];
                k=v[i+1];
            }
        }
        return {m,k};
    }
};