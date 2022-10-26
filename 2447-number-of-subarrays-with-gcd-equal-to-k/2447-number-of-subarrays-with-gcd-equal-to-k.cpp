class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int i,c=0,t,j,l,m,s=0;
        for(i=0;i<nums.size();i++){
            c=0;
            for(j=i;j<nums.size();j++){
                c=__gcd(c,nums[j]);
                if(c==k){
                    //cout<<nums[i]<<" "<<nums[j]<<" ";
                    s++;
                }
            }
        }
        return s;
    }
};