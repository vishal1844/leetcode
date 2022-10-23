class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        int i,j,k,l,m,t,s=0,c=0;
        unordered_set<int>st;
        for(i=0;i<nums.size();i++){
            s+=nums[i];
            st.insert(nums[i]);
        }
        for(auto itr:st){
            c+=itr;
        }
        int n=nums.size();
        t=(n*(n+1))/2;
        v.push_back(s-c);
        v.push_back(t-c);
        return v;
    }
};