class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int i,j,k,l,m,t=0;
        priority_queue<int>pq;
        map<char,int>mp;
        for(auto itr:tasks){
            mp[itr]++;
        }
        for(auto itr:mp){
            pq.push(itr.second);
        }
        while(!pq.empty()){
           l=0;
            vector<int>v;
            m=pq.size();
            k=min(n+1,m);
            while(k--){
                auto itr=pq.top();
                pq.pop();
                if((itr-1)>0)
                v.push_back(itr-1);
                l++;
            }
            for(auto itr:v){
                pq.push(itr);
            }
            if(pq.empty()){
                t+=l;
                return t;
            }
            else{
                t+=n+1;
            }
        }
        return t;
    }
};