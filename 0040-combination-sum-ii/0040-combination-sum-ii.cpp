class Solution {
    set<vector<int>>st;
    void solve(int ind,int n,vector<int>&cand,int target,vector<int>v,vector<vector<int>>&ans){
        if(ind==n){
            if(target==0){
                st.insert(v);
                return;
            }
            if(target>0){
                return;
            }
        }
        if(target==0){
            st.insert(v);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=ind;i<n;i++){
            if(i>ind&&cand[i]==cand[i-1])continue;
            if(cand[i]<=target){
                v.push_back(cand[i]);
                solve(i+1,n,cand,target-cand[i],v,ans);
                v.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(cand.begin(),cand.end());
        int t=accumulate(cand.begin(),cand.end(),0);
        if(t<target)return ans;
        solve(0,cand.size(),cand,target,v,ans);
        for(auto itr:st){
            ans.push_back(itr);
        }
        return ans;
    }
};