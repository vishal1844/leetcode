class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        int i,j,k,l,m,t=0;
        j=0;
        k=1;
        for(i=0;i<nums.size();i++){
            if(nums[i]>0){
                v[j]=nums[i];
                j+=2;
            }
            else{
                v[k]=nums[i];
                k+=2;
            }
        }
        // j=1;
        // for(i=0;i<nums.size();i++){
        //     if(nums[i]<0){
        //         v[j]=nums[i];
        //         j+=2;
        //     }
        // }
        return v;
    }
};