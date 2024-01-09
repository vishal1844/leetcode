class Solution {
public:
    int titleToNumber(string c) {
        int n=c.size();
        int i,j,k,l,m,t=0;
        k=1;
        for(i=n-1;i>=0;i--){
            if(i==n-1){
                t+=c[i]-'A'+1;
            }
            else{
                k=26*k;
                l=k*(c[i]-'A'+1);
                t+=l;
            }
            
        }
        return t;
    }
};