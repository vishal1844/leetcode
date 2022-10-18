class Solution {
public:
    int minimumMoves(string s) {
        int n=s.size();
        int i,j,k,l,m,t,c=0;
        for(i=0;i<n;i++){
            if(s[i]=='X'){
                c++;
                i+=2;
            }
        }
        return c;
    }
};