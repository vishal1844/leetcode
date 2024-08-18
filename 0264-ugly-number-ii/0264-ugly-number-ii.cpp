class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long>st;
        int k=1;
        st.insert(k);
        for(int i=0;i<n;i++){
            k=*st.begin();
            st.erase(k);
            st.insert(1ll*k*2);
            st.insert(1ll*k*3);
            st.insert(1ll*k*5);
        }
        return k;
    }
};