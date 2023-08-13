class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        set<int>st;
        int i,j,k,l,m,t=INT_MAX;
        for(i=0;i<nums.size();i++){
            if(i>=x){
                st.insert(nums[i-x]);
                auto itr=st.lower_bound(nums[i]);
                if(itr!=st.end()){
                    t=min(t,abs(nums[i]-*itr));
                }
                itr--;
                if(itr!=st.end()){
                    t=min(t,abs(nums[i]-*itr));
                }
            }
            //st.insert(nums[i]);
        }
        return t;
        
    }
};