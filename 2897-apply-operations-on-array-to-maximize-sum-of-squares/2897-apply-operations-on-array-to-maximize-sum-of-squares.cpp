class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        vector<int>v(32,0);
        long long int i,j,l,m,t=0;
        for(i=0;i<nums.size();i++){
            t=0;
            while(nums[i]){
                if(nums[i]&1){
                    v[t]++;
                }
                t++;
                nums[i]/=2;
            }
        }
        // for(auto itr:v){
        //     cout<<itr<<" ";
        // }
        int maxi=INT_MAX;
         l=0;
        for(i=0;i<k;i++){
            t=0;
            for(j=0;j<32;j++){
                if(v[j]>=1){
                   t+=(1<<j);
//cout<<(1<<j)<<" ";
                    v[j]--;
                }
            }
           // maxi=min(maxi,t);
            //cout<<t<<endl;
           l=(l+t*t)%1000000007;
        }
        return l;
    }
};