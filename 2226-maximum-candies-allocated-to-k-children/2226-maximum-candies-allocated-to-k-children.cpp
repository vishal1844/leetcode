class Solution {
    bool check(vector<int>&candies,long long mid,long long k){
        long long int i,j,l,m,t=0;
        if(mid==0){
            return true;
        }
        for(auto itr:candies){
            t=t+(itr/mid);
        }
        return t>=k;
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long int i,j,m,t=0;
        for(i=0;i<candies.size();i++){
            t+=candies[i];
        }
        t/=k;
        long long l=0;
        long long h=t;
        while(l<=h){
            long long mid=(l+h)/2;
            if(check(candies,mid,k)){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return h;
    }
};