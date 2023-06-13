class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v(2);
        v[0]=-1;
        v[1]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v[0]=i;
                while(i<nums.size()&&nums[i]==target){
                    i++;
                }
                v[1]=i-1;
            }
        }
        return v;
    }
};