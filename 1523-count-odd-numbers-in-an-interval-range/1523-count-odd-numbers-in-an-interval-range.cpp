class Solution {
public:
    int countOdds(int low, int high) {
        int t=0;
        int i,j,k,l,m;
        if(low%2==1){
            t++;
            k=high-low;
            k=k/2;
            return t+k;
        }
        k=high-low+1;
        k=k/2;
        return k;
    }
};