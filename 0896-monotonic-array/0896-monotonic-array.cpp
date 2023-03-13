class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i,j,k,l,m,t=0;
        if(nums.size()<=1){
            return true;
        }
        k=nums[0];
        if(nums[0]>=nums[1]){
            i=0;
            while(i<nums.size()-1&&nums[i]>=nums[i+1]){
                //cout<<i<<" ";
                i++;
            }
            if(i==nums.size()-1){
                return true;
            }
        }
        if(nums[0]<=nums[1]){
            i=0;
            while(i<nums.size()-1&&nums[i]<=nums[i+1]){
               // cout<<i<<" ";
                i++;
            }
            if(nums.size()-1==i){
                return true;
            }
        }
        return false;
    }
};