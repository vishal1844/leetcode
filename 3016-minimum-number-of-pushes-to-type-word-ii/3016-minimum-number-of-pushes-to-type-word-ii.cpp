class Solution {
public:
    int minimumPushes(string word) {
        vector<int>v(26,0);
        for(auto itr:word){
            v[itr-'a']++;
        }
        sort(v.rbegin(),v.rend());
        int i,j,k=0,t=0;
        for(i=0;i<26;i++){
            if(i%8==0){
                k++;
            }
            t+=(k*v[i]);
        }
        return t;
    }
};