class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int t=nums.size()/3;
        map<int,int>mp;
        for(auto itr:nums)mp[itr]++;
        vector<int>v;
        for(auto itr:mp){
            if(itr.second>t){
                v.push_back(itr.first);
            }
        }
        return v;
    }
};