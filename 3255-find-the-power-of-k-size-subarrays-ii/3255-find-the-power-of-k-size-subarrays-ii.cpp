class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>v;
        int i,j,l,m,t=0;
        j=0;
        vector<int>p(nums.size());
        l=0;
        if(k==1)return nums;
        for(i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]+1)l++;
            if(i>=k-1){
                if(l){
                    v.push_back(-1);
                }
                else{
                    v.push_back(nums[i]);
                }
                if(nums[j]+1!=nums[j+1])l--;
                j++;
            }
        }
        return v;
    }
};