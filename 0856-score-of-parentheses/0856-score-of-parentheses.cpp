class Solution {
public:
    int scoreOfParentheses(string s) {
        int i,j,k=0,t=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='('){
                k++;
            }
            else{
                k--;
                if(s[i-1]=='('){
                    t+=(1<<k);
                }
            }
        }
        return t;
    }
};