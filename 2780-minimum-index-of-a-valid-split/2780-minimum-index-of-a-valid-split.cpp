class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp,mps;
        int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            mps[nums[i]]++;
        }
        for(i=0;i<n-1;i++){
            mp[nums[i]]++;
            mps[nums[i]]--;
            if(mp[nums[i]]*2>(i+1)){
                if(mps[nums[i]]*2>(n-i-1)){
                    return i;
                }
            }
        }
        return -1;
    }
};