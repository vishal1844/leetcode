class Solution {
    static bool comp(pair<int,int>&a,pair<int,int>&b){
        if(a.first<b.first)return 1;
        if(a.first==b.first){
            if(a.second>b.second)return 1;
        }
        return 0;
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        for(auto itr:nums){
            mp[itr]++;
        }
        vector<pair<int,int>>v;
        for(auto itr:mp){
            v.push_back({itr.second,itr.first});
        }
        sort(v.begin(),v.end(),comp);
        int j=0;
        for(int i=0;i<v.size();i++){
            int k=v[i].first;
            while(k--){
                nums[j++]=v[i].second;
            }
        }
        return nums;
    }
};