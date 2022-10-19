// class Solution {
// public:
//     string frequencySort(string s) {
//         int i,j,k,l,m,t,n;
//         n=s.size();
//         map<char,int>mp;
//         for(i=0;i<n;i++){
//             mp[s[i]]++;
//         }
//         for()
        
//     }
// };
class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> mp;
        
        for(auto i:s){
            mp[i]++;
        }
        
        priority_queue<pair<int, char>> pq;
        for(auto i:mp){
            pq.push({i.second, i.first});
        }
        
        string res;
        while(!pq.empty()){
            res+=string(pq.top().first, pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};