class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>v;
        int i,j,k,l,m,t=0;
        if(nums.size()==1){
            return {nums[0]};
        }
        unordered_map<int,int>mp;
        for(auto itr:nums){
            mp[itr]++;
        }
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++){
            if(i==0){
                if(nums[i]+1==nums[i+1]||nums[i]-1==nums[i+1]){
                    i++;
                    continue;
                }
                else{
                    if(mp[nums[i]]==1)
                    v.push_back(nums[i]);
                }
            }
            else{
                if(nums[i]+1==nums[i+1]||nums[i]-1==nums[i+1]){
                    //i++;
                    continue;
                }
                else if(nums[i]+1==nums[i-1]||nums[i]-1==nums[i-1]){
                    continue;}
                else{
                    if(mp[nums[i]]==1)
                    v.push_back(nums[i]);
                }
            }
        }
        int n=nums.size();
        if(nums[n-1]-1!=nums[n-2]&&nums[n-1]+1!=nums[n-2]){
            if(mp[nums[n-1]]==1)
            v.push_back(nums[n-1]);
        }
        return v;
    }
};