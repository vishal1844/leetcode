class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,k,l,t=1;
        if(s=="") return 0;
        unordered_set<char>st;
        for(i=0;i<s.size();i++){
            for(j=i;j<s.size();j++){
            if(st.find(s[j])!=st.end()){
                if(t<st.size())
                    t=st.size();
                st.clear();
                break;
            }
            st.insert(s[j]);
        }
        }
        return t;
    }
};