class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int i,j,l,m,t=k;
        for(auto itr:nums){
            t=t^itr;
        }
       // t^=k;
        i=0;
        // while(t){
        //     if(t%2){
        //         i++;
        //     }
        //     t/=2;
        // }
        i=__builtin_popcount(t);
        return i;
        
    }
};