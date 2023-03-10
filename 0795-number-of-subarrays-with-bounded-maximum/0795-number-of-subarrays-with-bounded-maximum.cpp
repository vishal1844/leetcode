class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int i,j,k,l=0,m=-1,t=-1;
        for(i=0;i<nums.size();i++){
           if(nums[i]>=left){
               m=i;
           }
            if(nums[i]>right){
                t=i;
            }
            l+=m-t;
            
        }
        return l;
        
    }
};