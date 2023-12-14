class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,j,k,l,m,t=0;
        for(i=0;i<32;i++){
            int s=0;
            for(auto itr:nums){
                if(itr>>i&1){
                    s++;
                }
            }
            s%=3;
            t+=s<<i;
        }
        return t;
    }
};