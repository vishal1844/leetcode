class Solution {
public:
    string compressedString(string word) {
        stack<char>st;
        int i,j,k,l,m,t=0;
        string s;
        for(auto itr:word){
            if(st.empty()){
                st.push(itr);
                continue;
            }
            if(st.top()!=itr){
                s+=st.size()+'0';
                s+=st.top();
                while(!st.empty())st.pop();
            }
            if(st.size()==9){
                s+='9';
                s+=st.top();
                while(!st.empty())st.pop();
            }
            st.push(itr);
        }
        if(!st.empty()){
            s+=st.size()+'0';
            s+=st.top();
        }
        return s;
    }
};