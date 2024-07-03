class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=4)return 0;
        int i,j,k,l,m,t=INT_MAX;
        int n=nums.size();
        j=n-4;
        for(i=0;i<4;i++){
            t=min(t,nums[j+i]-nums[i]);
        }
        return t;
    }
};