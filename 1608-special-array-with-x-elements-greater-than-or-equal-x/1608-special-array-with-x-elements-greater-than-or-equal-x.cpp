class Solution {
public:
    int specialArray(vector<int>& nums) {
        int i,j,k=0,l,m,t=0;
        map<int,int>mp;
        for(auto itr:nums){
            mp[itr]++;
        }
        t=nums.size();
        for(i=0;i<=nums.size();i++){
            if(t==i)return t;
            t-=mp[i];
        }
        return -1;
    }
};