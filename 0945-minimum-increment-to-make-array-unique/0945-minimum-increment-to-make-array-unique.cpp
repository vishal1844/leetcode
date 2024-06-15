class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            if(i==0){
                k=nums[i];
            }
            else{
                if(k>=nums[i]){
                    t+=k-nums[i]+1;
                    k++;
                }
                else{
                    k=nums[i];
                }
            }
        }
        return t;
    }
};