class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX,maxi=0;
        int maximum=0;
        int i,j,k;
        for(i=0;i<prices.size();i++){
            if(i==0){
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]);
                continue;
            }
            if(mini>prices[i]){
                mini=prices[i];
                maxi=prices[i];
            }
            else{
                maxi=max(maxi,prices[i]);
            }
            maximum=max(maximum,maxi-mini);
        }
        maximum=max(maximum,maxi-mini);
        return maximum;
    }
};