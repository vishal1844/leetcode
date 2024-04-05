class Solution {
public:
    string makeGood(string s) {
        int i,j,k,l,t;
        stack<char>st;
        string str="";
        if(s.size()!=0){
            st.push(s[0]);
        }
        i=1;
        while(i<s.size()){
            if(!st.empty()&&st.top()==s[i]){
                st.push(s[i]);
                i++;
            }
            else if(!st.empty()&&tolower(st.top())==s[i]){
                st.pop();
                i++;
            }
            else if(!st.empty()&&st.top()==tolower(s[i])){
                st.pop();
                i++;
            }
            else{
                st.push(s[i]);
                i++;
            }
        }
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};