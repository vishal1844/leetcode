class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int maxi=-1e5-2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<=abs(maxi-target)){
                    maxi=sum;
                    // k--;
                    // j++;
                    if(sum<target){
                    j++;
                    while(j<k&&nums[j]==nums[j-1])j++;
                }
                else{
                    k--;
                    while(j<k&&nums[k]==nums[k+1])k--;
                }
                    // while(j<k&&nums[k]==nums[k-1])k--;
                    // while(j<k&&nums[j]==nums[j-1])j++;
                    //continue;
                }
                 else if(sum<target){
                    j++;
                    while(j<k&&nums[j]==nums[j-1])j++;
                }
                else{
                    k--;
                    while(j<k&&nums[k]==nums[k+1])k--;
                }
            }
        }
        return maxi;
        
    }
};