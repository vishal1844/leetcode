class Solution {
public:
    int maxDepth(string s) {
        int i,j,k,l,m=0,t=0;
        for(auto itr:s){
            if(itr=='('){
                m++;
            }
            else if(itr==')') m--;
            t=max(t,m);
        }
        return t;
    }
};