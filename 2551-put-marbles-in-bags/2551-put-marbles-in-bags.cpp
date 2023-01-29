class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        long long int i,j,l,m=0,t=0;
        long long int n=weights.size();
        vector<long long int>v;
        for(i=0;i<weights.size()-1;i++){
            v.push_back(weights[i]+weights[i+1]);
        }
        sort(v.begin(),v.end());
        for(i=0;i<k-1;i++){
            t+=v[i];
            m+=v[n-i-2];
        }
        return m-t;
    }
};