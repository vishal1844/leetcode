class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long int i,j,k=-1,l,s=0;
        for(i=0;i<nums.size();i++){
            s+=nums[i];
           // k=max(k,(s+i)/(i+1));                  //why this becz 7=3+2+2 and maximum is 3
            l=ceil((1.0*s)/(i+1));
            k=max(k,l);
        }                                          //so we take ceil also
        return k;
    }
};