class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,k,l,t,m;
        vector<int>v,dup;
        dup=nums;
        sort(dup.begin(),dup.end());
        int n=nums.size();
        i=0;
        j=n-1;
        while(i<j){
            if(dup[i]+dup[j]==target){
                k=dup[i];
                t=dup[j];
                break;
            }
            else if(dup[i]+dup[j]>target){
                j--;
            }
            else
                i++;
        }
       for(i=0;i<nums.size();i++){
           if(nums[i]==k){
               v.push_back(i);
               //continue;
           }
           else if(nums[i]==t)
               v.push_back(i);
       }
        return v;
    }
};