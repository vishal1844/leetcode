class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>v;
        int i,j,l,m,t=0;
        sort(nums.begin(),nums.end());
        vector<int>vec;
        for(i=0;i<nums.size();i++){
            // if(i%3==2){
            //     v.push_back(vec);
            //     vec.clear();
            // }
            if(i%3==0){
                l=nums[i];
                vec.push_back(nums[i]);
            }
            else{
                if(abs(l-nums[i])<=k){
                    vec.push_back(nums[i]);
                }
                 else{
                    return {};
                }
            }
            if(i%3==2){
                v.push_back(vec);
                vec.clear();
            }
        }
        return v;
    }
};