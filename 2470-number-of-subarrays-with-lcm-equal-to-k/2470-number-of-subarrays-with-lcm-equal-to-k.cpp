class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int t=nums[i];
            for(int j=i;j<nums.size();j++){
                t=lcm(t,nums[j]);
                if(t>k) break;
                if(t==k)
                    ans++;
            }
        }
        return ans;
        
        
    }
};