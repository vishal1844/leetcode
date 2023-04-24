class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int i,j,k,l,m,t=0;
        for(auto itr:stones){
            pq.push(itr);
        }
        while(pq.size()!=1){
            i=pq.top();
            pq.pop();
            j=pq.top();
            pq.pop();
            pq.push(i-j);
        }
        return pq.top();
    }
};