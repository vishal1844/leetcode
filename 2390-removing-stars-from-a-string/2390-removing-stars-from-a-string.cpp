class Solution {
public:
    string removeStars(string s) {
        int i,j=0,k,l,m,t=0;
        string st;
        for(i=s.size()-1;i>=0;i--){
            while(i>=0&&s[i]=='*'){
                j++;
                i--;
            }
            if(s[i]!='*'){
                if(j>0){
                    j--;
                }
                else{
                    st+=s[i];
                }
            }
        }
        reverse(st.begin(),st.end());
        return st;
    }
};