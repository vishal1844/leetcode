class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int i,j,k,l,m;
        int t=0;
        int n=nums.size();
        k=n/2;
        for(i=0;i<n;i++){
            t+=abs(nums[i]-nums[k]);
        }
        return t;
    }
};