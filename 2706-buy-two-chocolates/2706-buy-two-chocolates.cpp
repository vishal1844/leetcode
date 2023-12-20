class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int t=prices[0]+prices[1];
        if(t<=money)return money-t;
        return money;
    }
};