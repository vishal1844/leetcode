class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long int i,j,k=-1,l,s=0;
        for(i=0;i<nums.size();i++){
            s+=nums[i];
            k=max(k,(s+i)/(i+1));
        }
        return k;
    }
};