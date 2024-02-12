class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=0;
            int count1=0;
        for(int i=0;i<nums.size();i++)
        {
                if(count1==0)
                {
                        ele=nums[i];
                }
                 if(nums[i]==ele)
                        count1++;
                else
                        count1--;
        }
            return ele;
    }
};