class StockSpanner {
    stack<pair<int,int>>Garima;
public:
    StockSpanner() {    
    }
    
    int next(int price) {
        int ans=1;
        while(!Garima.empty()&&Garima.top().first<=price){
            ans+=Garima.top().second;
            Garima.pop();
        }
        Garima.push({price,ans});
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */