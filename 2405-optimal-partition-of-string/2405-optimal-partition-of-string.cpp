class Solution {
public:
    int partitionString(string s) {
        int i,j,k,m,l=0,t=0;
        for(i=0;i<s.size();i++){
            set<char>st;
            l=0;
            while(i<s.size()&&!st.count(s[i])){
                st.insert(s[i]);
                i++;
                l=1;
                //st.insert(s[i]);
            }
            t++;
            if(l==1)i--;
            st.clear();
        }
        return t;
        
        
    }
};