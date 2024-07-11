class Solution {
public:
    string reverseParentheses(string s) {
        string ans;
        int i,j,k,l,m,t=0;
        vector<int>v;
        for(i=0;i<s.size();i++){
            if(s[i]=='(')v.push_back(i);
            else if(s[i]==')'){
                k=v.back();
                v.pop_back();
                reverse(s.begin()+k+1,s.begin()+i);
            }
        }
        for(auto itr:s){
            if(itr!='('&&itr!=')'){
                ans+=itr;
            }
        }
        return ans;
        
    }
};