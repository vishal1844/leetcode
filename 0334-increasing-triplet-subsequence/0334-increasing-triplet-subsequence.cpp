class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return 0;
        }
        int l=INT_MAX,mid=INT_MAX,i,k,j;
        for(i=0;i<n;i++){
           if(nums[i]<=l){
               l=nums[i];
           }
            else if(nums[i]<=mid){
                mid=nums[i];
            }
            else
                return 1;
        }
        return 0;
    }
};