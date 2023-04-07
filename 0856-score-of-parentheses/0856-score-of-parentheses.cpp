class Solution {
public:
    int scoreOfParentheses(string s) {
        int i,j=0,t=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='('){
                j++;
            }
            else{
                j--;
                if(s[i-1]=='('){
                t+=(1<<j);
                }
            }
        }
        return t;
        
    }
};