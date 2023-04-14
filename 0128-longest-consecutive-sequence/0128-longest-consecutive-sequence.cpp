class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int i,j,k,l,m,t=1;
        for(i=0;i<nums.size();i++){
            if(i<nums.size()-1&&nums[i+1]==nums[i]+1){
                j=i;
                k=0;
                while(j<nums.size()-1&&((nums[j+1]==nums[j]+1)||(nums[j]==nums[j+1]))){
                    if(nums[j]==nums[j+1]){
                        k++;
                    }
                    j++;
                }
                t=max(t,j-i+1-k);
                i=j-1;
            }
        }
        return t;
    }
};