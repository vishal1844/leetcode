class Solution {
    int solve(vector<int>&nums,int mid,int k){
        int left=0;
        int t=0;
        for(int right=0;right<nums.size();right++){
            while((nums[right]-nums[left])>mid)left++;
            t+=right-left;
        }
        return t;
    }
public:
    int smallestDistancePair(vector<int>& nums, int k) {
       int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0;
        int h=nums[n-1]-nums[0];
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(nums,mid,k)<k){
                //ans=mid+1;
                l=mid+1;
            }
            else{
                ans=mid;
                h=mid-1;
            }
        }
        return ans;
    }
};