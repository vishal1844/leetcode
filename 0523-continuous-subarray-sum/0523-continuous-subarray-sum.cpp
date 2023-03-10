class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int i,j,l,m=0,t=0;
        unordered_map<int,int>mp{{0,0}};
        for(i=0;i<nums.size();i++){
            t+=nums[i];
            t=t%k;
            // if(t==0){
            //     if(i!=0){
            //         return true;
            //     }
            // }
            if(mp.find(t)!=mp.end()){
                if(mp[t]<i){
                    return true;
                }
            }
            else{
                mp[t]=i+1;
            }
        }
        return false;
    }
};