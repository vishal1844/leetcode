class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        long long int i,j,k,l,m,t=0;
        vector<long long>v,vec;
        j=2;
        if(finalSum%2==1){
            return v;
        }
        k=finalSum;
        for(i=2;i<=1ll*finalSum;i+=2){
            if(i>k){
                break;
            }
            else{
                //cout<<i<<" ";
                v.push_back(i);
                k-=i;
            }
            if(k==0){
                return v;
            }
        }
        t=v.size()-1;
        v[t]=v[t]+k;
        return v;
    }
};