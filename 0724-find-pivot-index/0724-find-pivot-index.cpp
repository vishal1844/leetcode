class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int n=nums.size();
        int i,j,k,l,m,t,s=0,r=0;
        for(i=0;i<n;i++){
            s+=nums[i];
        }
        for(i=0;i<n;i++){
            if(r==s-r-nums[i])
                return i;
            r+=nums[i];
        }
        return -1;
    }
};