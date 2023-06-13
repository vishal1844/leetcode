class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>st;
        int k=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(st.count(nums[i]))continue;
                else{
                    if(nums[i]!=k)return k;
                }
                k++;
                st.insert(nums[i]);
            }
        }
        return k;
    }
};