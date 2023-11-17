class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,j,k,l,t=0;
        i=0;
        j=nums.size()-1;
        while(i<j){
            t=max(t,nums[i]+nums[j]);
            i++;
            j--;
        }
        return t;
    }
};