class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,i,j,k,t=0;
        unordered_set<char>st;
        for(r=0;r<s.size();r++){
            if(st.find(s[r])!=st.end()){
                while(st.find(s[r])!=st.end()){
                    st.erase(s[l++]);
                }
            }
            st.insert(s[r]);
            t=max(t,r-l+1);
        }
        return t;
    }
};