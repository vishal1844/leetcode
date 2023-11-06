class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int t=0;
        map<int,int>mp;
        for(auto itr:nums){
            if(mp.find(k-itr)!=mp.end()){
                mp[k-itr]--;
                if(mp[k-itr]==0){
                    mp.erase(k-itr);
                }
                t++;
            }
            else{
                mp[itr]++;
            }
        }
        return t;
    }
};