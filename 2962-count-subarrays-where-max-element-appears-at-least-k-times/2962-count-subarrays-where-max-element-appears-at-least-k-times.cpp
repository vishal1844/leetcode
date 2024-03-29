class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long i,j,l,m,t=0;
        j=0;
        m=0;
        l=*max_element(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            if(l==nums[i])m++;
            if(m>=k){
                //t+=(nums.size()-i);
                while(j<nums.size()&&m>=k){
                    t+=(nums.size()-i);
                    //cout<<t<<" ";
                    if(nums[j]==l)m--;
                    j++;
                }
            }
        }
        return t;
    }
};