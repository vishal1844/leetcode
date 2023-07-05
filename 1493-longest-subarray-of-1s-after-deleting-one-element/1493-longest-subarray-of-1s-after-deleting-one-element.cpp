class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int t=0,i,j=0,k;
        vector<int>v;
        v.push_back(0);
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                v.push_back(i);
            }
        }
        if(v.size()==1){
            return nums.size()-1;
        }
        v.push_back(i);
        for(i=2;i<v.size();i++){
            if(i==2)
            t=max(t,v[i]-v[i-2]-1);
            else{
                t=max(t,v[i]-v[i-2]-2);
            }
        }
        return t;
    }
};