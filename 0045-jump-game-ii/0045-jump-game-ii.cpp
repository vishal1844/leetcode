class Solution {
public:
    int jump(vector<int>& nums) {
        int i,j,k,l=0,m=0,t=0;
        int n=nums.size()-1;
        k=n;
        for(i=0;i<n;i++){
           m=max(m,nums[i]+i);
            if(l==i){
                l=m;
                t++;
                // if(l>=k){
                //     return t; 
                // }
            }
        }
        return t;
    }
};