class Solution {
    set<vector<int>>st;
    void solve(int i,vector<int>v,vector<int>&nums,int n){
        if(i>=n){
            st.insert(v);
            return;
        }
        v.push_back(nums[i]);
        solve(i+1,v,nums,n);
        v.pop_back();
        solve(i+1,v,nums,n);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>vec;
        vector<int>v;
        sort(nums.begin(),nums.end());
        int i,j,k,l,m,t=0;
        solve(0,v,nums,nums.size()); 
        v.clear();
        for(auto itr:st){
            vec.push_back(itr);
        }
        return vec;
    }
};