class Solution {
    int solve(string s){
        int i,j,k,l,m,t=0;
        for(auto itr:s){
            t+=itr-'0';
        }
        return t;
    }
public:
    int getLucky(string s, int k) {
        int i,j,l,m,t=0;
        string str;
        for(auto itr:s){
            str+=to_string((itr-'a')+1);
        }
        while(k--){
            t=solve(str);
            //cout<<t<<" ";
            str=to_string(t);
        }
        return t;
    }
};