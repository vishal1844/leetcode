class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int i,j,k,l,m,t=0;
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(i=0;i<barcodes.size();i++){
            mp[barcodes[i]]++;
        }
        for(auto itr:mp){
            pq.push({itr.second,itr.first});
        }
        vector<int>v;
        while(!pq.empty()){
            auto itr=pq.top();
            k=itr.first;
            l=itr.second;
            v.push_back(itr.second);
            pq.pop();
            if(!pq.empty()){
            auto it=pq.top();
            i=it.first;
            j=it.second;
            v.push_back(it.second);
            pq.pop();
            
            if(i-1!=0){
                pq.push({i-1,j});
            }}
            if(k-1!=0){
                pq.push({k-1,l});
            }
            // if(i-1!=0){
            //     pq.push({i-1,j});
            // }
        }
        return v;
    }
};