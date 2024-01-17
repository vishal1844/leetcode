class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,j,k;
        for(i=0;i<nums.size();i++){
            while(nums[i]!=i+1){
                if(nums[i]==nums[nums[i]-1])return nums[i];
                swap(nums[nums[i]-1],nums[i]);
            }
        }
        return 0;
    }
};