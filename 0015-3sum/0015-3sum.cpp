class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i=0;i<nums.size()-2;i++){
            if(i>=1&&nums[i-1]==nums[i]){
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int>vec{nums[i],nums[j],nums[k]};
                    v.push_back(vec);
                    j++;
                    k--;
                    while(j<k&&nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k&&nums[k]==nums[k+1]){
                        k--;
                    }
                    if(j>k)break;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return v;
    }
};