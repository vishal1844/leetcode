class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int t=0;
        for(int i=0;i<nums.size();i++){
            int k=1;
            while(i+1<nums.size()&&nums[i]==nums[i+1]){
                k++;
                if(k>2){
                    nums.erase(nums.begin()+i);
                    i--;
                }
                i++;
            }
            t+=min(k,2);
        }
        return t;
    }
};