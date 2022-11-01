class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,s=nums[0];
        vector<int>v;
        v.push_back(nums[0]);
        for(i=1;i<nums.size();i++){
            s+=nums[i];
            v.push_back(s);
        }
        return v;
    }
};