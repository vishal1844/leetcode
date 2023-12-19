class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target)return 1;
            if((nums[l]==nums[mid])&&(nums[mid]==nums[h])){
                l++;
                h--;
            }
            else if(nums[l]<=nums[mid]){
                if((nums[l]<=target)&&(nums[mid]>target)){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if((nums[mid]<=target)&&(nums[h]>=target)){
                    l=mid+1;
                }
                else h=mid-1;
            }
        }
        return 0;
    }
};