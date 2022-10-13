class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int i,j,k,l,m,t;
        vector<int>v;
        for(i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
                break;
            }
            mp[nums[i]]=i;
        }
        return v;
    }
};