class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int i,j,k,l,m,t=0;
        vector<long long int>v(nums.size()+1,0);
        for(i=0;i<nums.size();i++){
            v[i+1]=nums[i]+v[i];
        }
        for(i=2;i<nums.size();i++){
            if(v[i]>nums[i]){
                t=v[i+1];
            }
        }
        if(t==0)return -1;
        return t;
    }
};