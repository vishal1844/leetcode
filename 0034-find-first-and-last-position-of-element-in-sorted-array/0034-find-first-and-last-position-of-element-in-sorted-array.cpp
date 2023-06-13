class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,i=-1,j=-1;
        vector<int>v(2);
        v[0]=-1;
        v[1]=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                i=mid;
                h=mid-1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        v[0]=i;
        l=0;
        h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                j=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        v[1]=j;
        return v;
    }
};