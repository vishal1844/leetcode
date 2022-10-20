class Solution {
public:
    string frequencySort(string s) {
        int i,j,k,l,m,t;
        int n=s.size();
        unordered_map<char,int>mp;
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto itr:mp){
            pq.push({itr.second,itr.first});
        }
        string st;
        while(!pq.empty()){
            st+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return st;
        
    }
};