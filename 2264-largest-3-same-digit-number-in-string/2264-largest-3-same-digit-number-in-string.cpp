class Solution {
public:
    string largestGoodInteger(string num) {
        int i,j,k,l,m,t=0;
        int n=num.size();
        string st="";
        for(i=1;i<n-1;i++){
            if((num[i]==num[i-1])&&(num[i]==num[i+1])){
                string str=num.substr(i-1,3);
                if(t<=stoi(str)){
                    t=stoi(str);
                    st=str;
                }
            }
        }
        return st;
    }
};