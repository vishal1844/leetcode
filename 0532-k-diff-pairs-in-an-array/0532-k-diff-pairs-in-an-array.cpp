class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int i,j,l,m,t=0;
        set<int>st;
        set<pair<int,int>>s;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            if(st.count(nums[i]-k)){
                //t++;
                s.insert({nums[i]-k,nums[i]});
                //st.erase(nums[i]-k);
            }
            st.insert(nums[i]);
        }
        return s.size();
        
    }
};