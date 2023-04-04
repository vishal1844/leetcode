class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int i,j,k,l,m,t=0;
        for(i=0;i<s.size();i++){
            if(st.count(s[i])){
                t++;
                st.clear();
            }
            st.insert(s[i]);
        }
        t++;
        return t;
    }
};