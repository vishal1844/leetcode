class Solution {
public:
    long long wonderfulSubstrings(string word) {
        long long t=0;
        int i,j,k,l,m;
        k=0;
        map<long long,long long>mp;
        mp[0]=1;
        for(auto itr:word){
            i=1<<(itr-'a');
            k^=i;
            t+=mp[k];
                for(m=0;m<10;m++){
                    i=1<<m;
                    l=k^i;
                    t+=mp[l];
                }
            mp[k]++;
        }
        return t;
    }
};