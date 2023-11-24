class Solution {
public:
    int maxCoins(vector<int>& piles) {
       int i,j,k,l,m,t=0;
        sort(piles.begin(),piles.end());
        j=0;
        int n=piles.size();
        for(i=n-2;i>j;i-=2){
            t+=piles[i];
            j++;
        }
        return t;
    }
};