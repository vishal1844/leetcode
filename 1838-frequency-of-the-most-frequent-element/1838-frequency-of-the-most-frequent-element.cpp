class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        int i,j,l,t=0;
        sort(nums.begin(),nums.end()); 
        long long s=0;
        j=0;
        for(i=0;i<n;i++){
            s+=(long long)nums[i];
            if((i-j+1)*(long long)nums[i]-s>k){
                s-=nums[j];
                j++;
            }
            t=max(t,i-j+1);
        }
        return t;
    }
};