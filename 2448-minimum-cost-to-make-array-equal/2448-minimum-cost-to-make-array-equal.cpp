class Solution {
    long long func(vector<int>&nums,vector<int>&cost,long long int k){
        long long int  i,j,l,m,t=0;
        for(i=0;i<nums.size();i++){
            t+=1L*(abs(nums[i]-k)*cost[i]);
        }
        return t;
        
    }
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long l=1,r=1000000,i,j,p,k;
        long long res=func(nums,cost,1);
        while(l<r){
            long long mid=(l+r)/2;
            j=func(nums,cost,mid);
            p=func(nums,cost,mid+1);
            res=min(j,p);
            if(j<p){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return res;
        
    }
};