class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int i,j,k,l,t=0;
        for(i=0;i<costs.size();i++){
            if(coins>=costs[i]){
                coins=coins-costs[i];
                t++;
            }
            else{
                break;
            }
        }
        return t;
    }
};