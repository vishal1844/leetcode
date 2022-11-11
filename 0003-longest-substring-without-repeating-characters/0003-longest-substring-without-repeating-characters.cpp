class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,k,l,t=1;
        if(s=="") return 0;
        unordered_set<char>st;
        for(i=0;i<s.size();i++){
            for(j=i;j<s.size();j++){
            if(st.find(s[j])!=st.end()){
                if(t<st.size()){
                    //cout<<s[j]<<" "<<st.size()<<t;
                    t=st.size();
                }
                //t=max(t,st.size());
                st.clear();
                break;
            }
            st.insert(s[j]);
                //cout<<"hello";
        }
        }
        return t;
    }
};