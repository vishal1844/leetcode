class Solution {
public:
    int passThePillow(int n, int time) {
        int i,j,k,l,m,t=0;
        n--;
        k=time%n;
        l=time/n;
        if(l%2==1){
            return n+1-k;
        }
        else{
            return k+1;
        }
        return 1;
    }
};