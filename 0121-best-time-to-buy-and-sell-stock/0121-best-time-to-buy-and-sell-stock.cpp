class Solution {
public:
    int maxProfit(vector<int>& profit) {
        int i,j,k,l,t,s;
        t=INT_MAX;
        k=0;
        s=0;
        for(i=0;i<profit.size();i++){
            if(profit[i]<t){
                t=profit[i];
            }
            if(k<profit[i]-t){
                k=profit[i]-t;
            }
        }
        //cout<<k;
        return k;
    }
};