class Solution {
    int rev(int n){
        int t=0;
        while(n!=0){
            t=t*10+(n%10);
            n/=10;
        }
        return t;
    }
public:
    int countNicePairs(vector<int>& nums) {
        //vector<int>v;
        int mod=1e9+7;
        int i,j,k,l,t=0;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++){
            nums[i]=nums[i]-rev(nums[i]);
            //v.push_back()
        }
        for(i=0;i<nums.size();i++){
            t=(t%mod+mp[nums[i]]%mod)%mod;
            mp[nums[i]]++;
        }
        return t%mod;
    }
};