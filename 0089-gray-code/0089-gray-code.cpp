class Solution {
public:
    vector<int> grayCode(int n) {
        int i,j,k,l,m,t=0;
        vector<int>v(1<<n);
        for(i=0;i<(1<<n);i++){
            v[i]=i^(i>>1);
        }
        return v;
        
    }
};