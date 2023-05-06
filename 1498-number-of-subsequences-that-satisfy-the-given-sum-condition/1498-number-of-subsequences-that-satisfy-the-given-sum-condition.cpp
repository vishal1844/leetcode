class Solution {
    long long int power(int i,int j,int mod){
        long long int k=1;
        while(j>0){
            if(j%2==1){
                k=((k%mod)*(i%mod))%mod;
            }
            j=j>>1;
            i=(1ll*i*i)%mod;
        }
        return k%mod;
    }
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            l=upper_bound(nums.begin()+i,nums.end(),target-nums[i])-nums.begin();
            l--;
            if(l>=i){
                l=l-i;
                k=power(2,l,1000000007)%1000000007;
            t=(t%1000000007+k%1000000007)%1000000007;
            }
        }
        return t;
    }
};