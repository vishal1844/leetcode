class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v;
        int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            j=(i+1)%nums.size();
            while((nums[i]>=nums[j%nums.size()])&&(i!=(j%nums.size()))){
                j=(j+1)%nums.size();
            }
            if(i==(j%nums.size())){
                v.push_back(-1);
            }
            else
            v.push_back(nums[j]);
        }
        return v;
    }
};