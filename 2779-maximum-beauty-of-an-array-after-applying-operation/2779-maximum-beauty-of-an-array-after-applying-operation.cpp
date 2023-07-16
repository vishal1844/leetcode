class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v(100007,0);
        for(int i=0;i<n;i++){
            if(nums[i]-k<=0){
                v[0]++;
            }
            else
            v[nums[i]-k]++;
            if(nums[i]+k>=100006){
                v[100006]--;
            }
            else
            v[nums[i]+k+1]--;
        }
        int t=0;
        int c=0;
        for(int i=0;i<=100006;i++){
            c+=v[i];
            t=max(c,t);
        }
        return t;
    }
};