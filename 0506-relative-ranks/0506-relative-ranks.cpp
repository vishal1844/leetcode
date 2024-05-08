class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans(score.size());
        int i,j,k,l,m,t=0;
        priority_queue<pair<int,int>>pq;
        for(i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        t=1;
        while(!pq.empty()){
            auto itr=pq.top();
            pq.pop();
            if(t==1){
                ans[itr.second]="Gold Medal";
                t++;
            }
            else if(t==2){
                ans[itr.second]="Silver Medal";
                t++;
            }
            else if(t==3){
                ans[itr.second]="Bronze Medal";
                t++;
            }
            else{
                ans[itr.second]=to_string(t);
                t++;
            }
        }
        return ans;
    }
};