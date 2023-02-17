//vector<vector<int>>v;
class Solution {
    vector<vector<int>>v;
    public:
    void solve(int i,vector<int>&nums,int n,vector<int>vec){
        if(i==n){
         v.push_back(vec);
            return ;
        }
        vec.push_back(nums[i]);
        solve(i+1,nums,n,vec);
        vec.pop_back();
        solve(i+1,nums,n,vec);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>vec;
         solve(0,nums,nums.size(),vec);
        return v;
        
    }
};