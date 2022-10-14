class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l,h,middle,s,i,j,k,t;
        l=0;
        h=nums.size()-1;
        while(l<=h){
            middle=(l+h)/2;
            if(nums[middle]==target)
                return middle;
            else if(nums[middle]<target)
                l=middle+1;
            else
                h=middle-1;
        }
        return l;
    }
};