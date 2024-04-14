class Solution {
public:
    long long numberOfSubarrays(vector<int>& nums) {
        long long i,j,k,l,m,t=0;
        j=0;
        map<long long ,long long>mp;
        stack<int>st;
        for(i=0;i<nums.size();i++){
            t+=mp[nums[i]];
            while(!st.empty()&&st.top()<nums[i]){
                mp[st.top()]--;
                st.pop();
            }
            st.push(nums[i]);
            mp[nums[i]]++;
        }
        return t+nums.size();
    }
};