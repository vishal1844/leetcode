class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
        
    }
};