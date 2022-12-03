class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        int i,j,k,l,m,t;
        string st="";
        for(i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto itr:mp){
            pq.push({itr.second,itr.first});
        }
        while(!pq.empty()){
            st+=string(pq.top().first,pq.top().second);
                pq.pop();
            }
        return st;
    }
};