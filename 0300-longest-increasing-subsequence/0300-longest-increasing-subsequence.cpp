class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n,i,j,k,l,m,t=0;
        vector<int>v;
        for(i=0;i<nums.size();i++){
            auto itr=lower_bound(v.begin(),v.end(),nums[i]);
            if(itr==v.end()){
                v.push_back(nums[i]);
            }else
            *itr=nums[i];
        }
        return v.size();
    }
};