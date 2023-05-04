class Solution {
    int solve(int n){
        int r,t=0;
        while(n!=0){
            r=n%10;
            t+=r;
            n/=10;
        }
        return t;
    }
public:
    int maximumSum(vector<int>& nums) {
        int i,j,k,l,m=0,t=-1;
        map<int,int>mp;
        for(i=0;i<nums.size();i++){
            l=solve(nums[i]);
            if(mp.find(l)!=mp.end()){
                t=max(t,mp[l]+nums[i]);
                if(mp[l]<nums[i])mp[l]=nums[i];
            }
            else {
                mp[l]+=nums[i];
            }
        }
        return t;
    }
};