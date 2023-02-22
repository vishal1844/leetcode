class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int i,j,k=0,l,m,t=0;
        for(i=0;i<numsDivide.size();i++){
            k=__gcd(k,numsDivide[i]);
        }
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            if(k%nums[i]==0){
                return i;
            }
        }
        return -1;
    }
};