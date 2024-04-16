class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        long long i,j,l,m,t=0;
        unordered_map<long long int,long long int>mp;
        for(i=0;i<nums.size();i++){
            m=__gcd(nums[i],k);
            l=k/m;
            for(auto itr:mp){
                if(itr.first%l==0){
                    t+=itr.second;
                }
            }
            mp[m]++;
        }
        return t;
    }
};