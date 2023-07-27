class Solution {
public:
    long long maxRunTime(int n, vector<int>& bat) {
        long long i,j,k,l,m,t=0;
        t=accumulate(bat.begin(),bat.end(),0ll);
        l=1;
        long long h=t/n;
        while(l<=h){
            long long mid=l+(h-l)/2;
            long long t=0;
            for(auto itr:bat){
                if(itr<mid){
                    t+=itr;
                }
                else{
                    t+=mid;
                }
            }
            if(t>=(long)(1ll*mid*n)){
                l=mid+1;
                k=mid;
            }
            else{
                h=mid-1;
            }
        }
        return k;
    }
};