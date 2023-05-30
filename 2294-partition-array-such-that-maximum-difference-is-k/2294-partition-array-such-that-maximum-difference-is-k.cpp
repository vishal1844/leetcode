class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int i,j,t,l,count=0;
        sort(nums.begin(),nums.end());
        t=nums[0];
        l=k+t;
        for(i=1;i<nums.size();i++){
            if(nums[i]<=l)continue;
            else{
                l=k+nums[i];
                count++;
            }
        }
        return ++count;
    }
};