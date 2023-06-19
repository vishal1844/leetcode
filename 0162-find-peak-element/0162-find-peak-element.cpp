class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int t=INT_MIN;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(t<nums[i]){
                t=nums[i];
                k=i;
            }
        }
        return k;
    }
};