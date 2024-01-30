class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        long long int i,j,k,l,m,t=0,r=0,p=0;
        for(i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                k=st.top();
                st.pop();
                l=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    m=k+l;
                }
                else if(tokens[i]=="-"){
                    m=l-k;
                }
                else if(tokens[i]=="*"){
                    m=k*l;
                }
                else{
                    m=l/k;
                }
                st.push(m);
            }
            else{
                r=0;
                k=0;
                string str=tokens[i];
                j=0;
                if(str[0]=='-'){
                    k=1;
                    j=1;
                }
                for(;j<str.size();j++){
                    p=str[j]-'0';
                    r=r*10+p;
                }
                if(k==1){
                    r=-1*r;
                }
                st.push(r);
            }
        }
        return st.top();
    }
};