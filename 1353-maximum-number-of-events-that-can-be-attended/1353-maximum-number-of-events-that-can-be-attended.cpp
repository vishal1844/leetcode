class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int i=0,j,k,l,m,t=0,d=0;
        sort(events.begin(),events.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(d=1;d<=100000;d++){
            while(!pq.empty()&&pq.top()<d){
                pq.pop();
            }
            while(i<events.size()&&events[i][0]==d){
                pq.push(events[i][1]);
                i++;
            }
            if(pq.size()){
                pq.pop();
                t++;
            }
        }
        return t;
    }
};