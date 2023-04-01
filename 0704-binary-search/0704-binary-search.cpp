class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i,j,k,m,t=0;
        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            m=(l+h)/2;
            if(nums[m]==target)return m;
            else if(nums[m]<target){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return -1;
    }
};