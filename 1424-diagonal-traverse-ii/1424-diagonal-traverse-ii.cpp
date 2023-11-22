class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int>v;
        map<int,vector<int>>mp;
        int i,j,k,l,t=0;
        for(i=nums.size()-1;i>=0;i--){
            for(j=0;j<nums[i].size();j++){
                k=i+j;
                mp[k].push_back(nums[i][j]);
            }
        }
        while(mp.find(t)!=mp.end()){
            for(auto itr:mp[t]){
                v.push_back(itr);
            }
            t++;
        }
        return v;
    }
};