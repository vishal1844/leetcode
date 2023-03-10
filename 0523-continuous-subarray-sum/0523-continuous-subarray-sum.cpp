class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int i,j,l,m=0,t=0;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++){
            t+=nums[i];
            t=t%k;
            if(t==0){
                if(i!=0){
                    return true;
                }
            }
            if(mp.find(t)!=mp.end()){
                if(i-mp[t]>=2){
                    return true;
                }
            }
            else{
                mp[t]=i;
            }
        }
        return false;
    }
};