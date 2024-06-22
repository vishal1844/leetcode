class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int i,j=0,l,m,t=0;
        for(i=0;i<nums.size();i++){
            j+=nums[i]%2;
            if(mp.find(j-k)!=mp.end()){
                t+=mp[j-k];
            }
            mp[j]++;
        }
        return t;
    }
};