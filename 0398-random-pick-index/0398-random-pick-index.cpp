class Solution {
    vector<int>v;
public:
    Solution(vector<int>& nums) {
        v=nums;
    }
    
    int pick(int target) {
        int t=0;
        int idx=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==target){
                t++;
                if(rand()%t==0){
                    idx=i;
                }
            }
        }
        return idx;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */