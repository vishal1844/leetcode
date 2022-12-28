class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int i,j,l,m,t=0;
        priority_queue<int>pq;
       for(i=0;i<piles.size();i++){
           t+=piles[i];
           pq.push(piles[i]);
       }
        for(i=0;i<k;i++){
            m=pq.top()/2;
            l=pq.top()-m;
            t-=m;
            pq.pop();
            pq.push(l);
        }
        return t;
    }
};
