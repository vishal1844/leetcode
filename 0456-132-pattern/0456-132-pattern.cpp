class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        int t=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<t)return 1;
            while(!st.empty()&&st.top()<nums[i]){
                t=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return 0;
    }
};