class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v;
        int i,j,k,l,m,t=0;
        for(i=0,j=n;i<n;i++,j++){
            v.push_back(nums[i]);
            v.push_back(nums[j]);
        }
        return v;
        
    }
};