class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long i,j,k,l,m,t=0;
        vector<int>freq(n,0);
        for(auto itr:roads){
            freq[itr[0]]++;
            freq[itr[1]]++;
        }
        sort(freq.rbegin(),freq.rend());
        for(auto itr:freq){
            t+=(1ll)*((long long)itr*n);
            n--;
        }
        return t;
    }
};