class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string str="";
        int i,j,k=0,l=0,m,t=0;
        for(auto itr:s){
            if(itr=='('){
                k++;
            }
            else if(itr==')'){
                if(k){
                    l++;
                    k--;
                }
            }
        }
        cout<<l<<" ";
        k=0;
        m=0;
        for(auto itr:s){
            if(itr=='('){
                if(m<l){
                    str+=itr;
                    k++;
                    m++;
                }
            }    
            else if(itr==')'){
                if(k){
                   // l--;
                    k--;
                    //m++;
                    str+=itr;
                }
            }
            else{
                str+=itr;
            }
        }
        return str;
    }
};