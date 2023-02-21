class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i,j,k,l,m,t=0;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto itr:mp){
            if(itr.second==1){
                return itr.first;
            }
        }
        return -1;
    }
};