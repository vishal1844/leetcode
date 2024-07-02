class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(auto itr:nums2){
            mp[itr]++;
        }
        int i,j,k,l,m,t=0;
        vector<int>ans;
        for(auto itr:nums1){
            if(mp[itr]){
                mp[itr]--;
                ans.push_back(itr);
            }
        }
        return ans;
    }
};