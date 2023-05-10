class Solution {
    set<vector<int>>st;
    void solve(int ind,int n,vector<int>&nums,vector<int>v,vector<int>&visit){
        if(v.size()==n){
            st.insert(v);
        }
        for(int i=0;i<n;i++){
            if(visit[i]==0){
            v.push_back(nums[i]);
            visit[i]=1;
            solve(ind+1,n,nums,v,visit);
            v.pop_back();
            visit[i]=0;
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        vector<int>visit(nums.size(),0);
        solve(0,nums.size(),nums,v,visit);
        for(auto itr:st){
            ans.push_back(itr);
        }
        return ans;
    }
};