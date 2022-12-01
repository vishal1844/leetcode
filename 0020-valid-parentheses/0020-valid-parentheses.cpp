class Solution {
public:
    bool isValid(string s) {
        int i,j,k,l,m,t;
        stack<int>st;
        if(s.size()==1)return false;
        for(i=0;i<s.size();i++){
            if(s[i]=='}'){
                if(st.size()&&st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(st.size()&&st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==')'){
                if(st.size()&&st.top()=='('){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
    };