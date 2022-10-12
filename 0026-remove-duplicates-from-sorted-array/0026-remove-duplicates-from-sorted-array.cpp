class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j=1,k,l,c=0;
        int n=nums.size();
        if(n==1){
            return 1;
        }
        for(i=0;i<n-1;i++){
           if(nums[i]!=nums[i+1]){
               nums[j++]=nums[i+1];
           }
        }
        return j;
    }
};