class Solution {
public:
    string removeDuplicates(string s) {
        string st="";
        int i,j,k;
        for(i=0;i<s.size();i++){
            if(!st.empty()&&st.back()==s[i]){
                st.pop_back();
            }
            else{
                st.push_back(s[i]);
            }
        }
        return st;
    }
};