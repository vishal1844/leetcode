class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i,j,l,m,t=0;
        m=0;
        j=0;
        map<int,int>mp;
        int n=nums.size();
        for(i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>k){
                while(j<nums.size()&&mp[nums[i]]>k){
                    mp[nums[j]]--;
                    j++;
                    
                }
                t=max(t,i-j+1);
            }
            t=max(t,i-j+1);
        }
        return t;
    }
};