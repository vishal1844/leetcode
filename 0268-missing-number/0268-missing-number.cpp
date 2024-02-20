class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i,j,k,l,sum=0;
        for(i=0;i<n;i++){
            sum+=nums[i];
        }
        k=(n*(n+1))/2;
        return k-sum;
    }
};