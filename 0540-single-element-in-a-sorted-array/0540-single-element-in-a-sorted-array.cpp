class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i,j,k=0,l,m,t=0;
        for(i=0;i<nums.size();i++){
            k^=nums[i];
        }
        return k;
        
    }
};