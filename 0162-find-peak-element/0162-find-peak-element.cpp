class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        int ans=INT_MIN;
        if(nums.size()==1){
            return 0;
        }
        while(l<h){
            int mid=(l+h)/2;
            if(nums[mid+1]<nums[mid]){
                //ans=mid;
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};