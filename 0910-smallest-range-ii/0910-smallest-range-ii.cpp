class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int t=nums[nums.size()-1]-nums[0];
        for(int i=0;i<nums.size()-1;i++){
            int high=max(nums[n]-k,nums[i]+k);
            int low=min(nums[0]+k,nums[i+1]-k);
            t=min(t,high-low);
        }
        return t;
    }
};