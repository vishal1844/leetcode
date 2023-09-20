class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i,j,l,m,t=0,r;
        int sum=0;
        for(auto itr:nums)sum+=itr;
        int rem=sum-x;
        int n=nums.size();
        int ans=-1;
        for(l=0,r=0;r<n;r++){
            t+=nums[r];
            while(l<=r&&t>rem){
                t-=nums[l++];
            }
            if(t==rem){
                ans=max(ans,r-l+1);
            }
        }
        if(ans==-1)return -1;
        return n-ans;
    }
};