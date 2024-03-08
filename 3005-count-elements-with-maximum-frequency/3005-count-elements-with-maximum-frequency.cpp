class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto itr:nums)mp[itr]++;
        int t=0;
        int k=0;
        for(auto itr:mp){
            if(t<itr.second){
                t=itr.second;
                k=itr.second;
            }
            else if(t==itr.second)k+=itr.second;
        }
        return k;
    }
    
};