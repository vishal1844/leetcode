class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        int i,j,k,l,t=0;
        for(auto itr:nums){
            //cout<<itr<<" ";
            mp[itr]++;
        }
        for(auto itr:mp){
            k=(itr.second*(itr.second-1))/2;
            //cout<<k<<" ";
            t+=k;
        }
        return t;
    }
};