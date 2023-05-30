class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v;
        int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                v.push_back(nums[i]);
            }
            if(nums[i]==pivot)t++;
        }
        while(t--){
            v.push_back(pivot);
        }
        for(i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};