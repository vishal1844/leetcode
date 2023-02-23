class Solution {
    void solve(int index,vector<int>&arr,vector<vector<int>>&v,int target,vector<int>vec){
        if(index==arr.size()){
            if(target==0){
                v.push_back(vec);
                return;
            }
            return;
        }
        if(arr[index]<=target){
            vec.push_back(arr[index]);
            solve(index,arr,v,target-arr[index],vec);
            vec.pop_back();
        }
        solve(index+1,arr,v,target,vec);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>vec;
        int i,j,k,l,m,t=0;
        solve(0,candidates,v,target,vec);
        return v;
    }
};