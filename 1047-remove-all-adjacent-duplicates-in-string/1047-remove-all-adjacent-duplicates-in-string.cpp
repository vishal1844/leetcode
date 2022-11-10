class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string stg="";
        int i,j,k,l,m;
        for(i=0;i<s.size();i++){
            if(!st.empty()&&st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            stg+=st.top();
            st.pop();
        }
        reverse(stg.begin(),stg.end());
        return stg;
    }
};