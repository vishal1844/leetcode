class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                if(i+1==nums.size()){
                    t++;
                    return t;
                }
                while(i<nums.size()&&nums[i]==0){
                    i++;
                }
                k=i-j;
                t+=(k*(k+1))/2;
            }
        }
        return t;
    }
};