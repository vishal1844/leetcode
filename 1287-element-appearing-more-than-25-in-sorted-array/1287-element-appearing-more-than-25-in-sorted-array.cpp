class Solution {
public:
    int findSpecialInteger(vector<int>& nums) {
        int t=nums[0],i,j,k=0,maxi=INT_MIN;
        for(i=0;i<nums.size();i++){
            if(t==nums[i]){
                k++;
                if(maxi<k){
                    maxi=k;
                    j=i;
                }
            }
            else{
                t=nums[i];
                k=1;
            }
        }
        return nums[j];
    }
};