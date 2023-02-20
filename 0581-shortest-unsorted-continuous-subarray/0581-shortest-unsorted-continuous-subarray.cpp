class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v;
        v=nums;
        int i,j,k=0,l=0,m,t=0,s=0;
        sort(v.begin(),v.end());
        if(v==nums)return 0;
        for(i=0;i<nums.size();i++){
            if(v[i]!=nums[i]){
                if(t==0){
                k=i;
                t=1;}
                else{
                    l=i;
                }
            }
        }
        return l+1-k;
    }
};