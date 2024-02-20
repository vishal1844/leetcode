class Solution {
public:
    int scoreOfParentheses(string s) {
        int i,j,k,l,t=0;
        stack<int>st;
        st.push(0);
        for(i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }
            else{
                k=st.top();
                st.pop();
                l=st.top();
                st.pop();
                st.push(l+max(2*k,1));
            }
        }
        return st.top();
    }
};