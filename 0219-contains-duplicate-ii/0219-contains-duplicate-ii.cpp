class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>>v;
        int i,j,l,m,t;
        for(i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size()-1;i++){
            if((v[i].first==v[i+1].first)&&((abs(v[i].second-v[i+1].second))<=k))
                return true;
        }
        return false;
    }
};