class Solution {
    static bool cmp(string &a,string &b){
        if(a.size()==b.size()){
            return a<b;
        }
        return a.size()<b.size();
    }
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        return nums[nums.size()-k];
    }
};