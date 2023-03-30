class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i,j,k,l,m=0,t=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(i=0;i<nums.size();i++){
            t+=nums[i];
            m+=mp[t-goal];
            mp[t]++;
        }
        return m;
        
    }
};