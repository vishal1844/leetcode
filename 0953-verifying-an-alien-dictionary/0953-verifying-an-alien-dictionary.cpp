class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int i,j,k,l,m,t=0;
        string s,st;
        for(i=0;i<words.size()-1;i++){
            s=words[i];
            st=words[i+1];
            j=0;
            while(j<s.size()&&j<st.size()&&s[j]==st[j]){
                j++;
            }
            if(j==s.size()){
                continue;
            }
            else if(j==st.size()){
                return false;
            }
            else if(order.find(s[j])>order.find(st[j])){
                return false;
            }
        }
        return true;
    }
};