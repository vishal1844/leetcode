class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        int i,j,k,l,m,t=0;
        t+=nb;
        while(nb>=ne){
            t+=(nb/ne);
            k=nb/ne;
            l=nb%ne;
            nb=k+l;
        }
        return t;
    }
};