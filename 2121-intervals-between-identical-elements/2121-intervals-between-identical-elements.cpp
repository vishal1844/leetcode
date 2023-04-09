class Solution {
public:
    vector<long long> getDistances(vector<int>& nums) {
        vector<long long int>v(nums.size(),0);
        long long int i,j,k,l,m,t=0;
        map<long long int,long long int>mp;
        map<long long int,long long int>mps;
        for(i=0;i<nums.size();i++){
            v[i]+=(mp[nums[i]]*i-mps[nums[i]]);
            mp[nums[i]]++;
            mps[nums[i]]+=i;
        }
        mp.clear();
        mps.clear();
        for(i=nums.size()-1;i>=0;i--){
            v[i]+=(mps[nums[i]]-(i*mp[nums[i]]));
            mp[nums[i]]++;
            mps[nums[i]]+=i;
        }
        return v;
    }
};