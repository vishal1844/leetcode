class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i,l,h,t=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            if(nums[i]==target)return true;
        }
        return false;
    }
};