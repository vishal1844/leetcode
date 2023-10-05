class Solution {
    int atmostk(vector<int>&nums,int k){
        int i,j,l,m,t=0;
        j=0;
        map<int,int>mp;
        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp.size()>k){
                while(mp.size()!=k){
                    mp[nums[j]]--;
                    if(mp[nums[j]]==0){
                        mp.erase(nums[j]);
                    }
                    j++;
                }
            }
            t+=i-j+1;
        }
        return t;
    }
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostk(nums,k)-atmostk(nums,k-1);
    }
};
