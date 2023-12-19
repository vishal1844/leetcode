class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        int i,j,k,t=0;
        for(i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0){
                v.push_back(abs(nums[i]));
            }
            nums[abs(nums[i])-1]=-1*nums[abs(nums[i])-1];
        }
        return v;
    }
};