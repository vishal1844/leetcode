class Solution {
public:
    string getPermutation(int n, int k) {
       string s,st;
        int i,j,l,m,t=1;
        for(i=1;i<=n;i++){
            st+=(i+'0');
        }
        while(t<k){
            next_permutation(st.begin(),st.end());
            t++;
        }
        return st;
        
    }
};