class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i,j,l,t=0,s=0;
        mp[0]++;
        for(i=0;i<nums.size();i++){
            l=(nums[i]%k+k)%k;
            t=(t+l)%k;
            if(mp.find(t)!=mp.end()){
                s+=mp[t];
            }
            mp[t]++;
        }
        return s;
    }
};