class Solution {
    int p=0,q=0;
    int solve(int i,int j,vector<int>&nums){
        if(i==j){
            return nums[i];
        }
        int left=nums[i]-solve(i+1,j,nums);
        int right=nums[j]-solve(i,j-1,nums);
        return max(left,right);
    }
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int i,j,k,t=0,m=0;
        t=solve(0,n-1,nums);
        if(t>=0)return 1;
        return 0;
        
        
    }
};