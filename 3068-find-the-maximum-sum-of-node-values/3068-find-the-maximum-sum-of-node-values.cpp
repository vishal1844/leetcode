class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long i,j,l,m,t=0;
        for(auto itr:nums)t+=itr;
        vector<int>v;
        int n=nums.size();
        for(i=0;i<n;i++){
            j=nums[i]^k;
            j-=nums[i];
            v.push_back(j);
        }
        sort(v.rbegin(),v.rend());
        for(i=0;i<n-1;i+=2){
            j=v[i]+v[i+1];
            if(j>=1){
                t+=j;
            }
        }
        return t;
    }
};