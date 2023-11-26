class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int t=accumulate(nums.begin(),nums.end(),0);
        int i,j,k,l,m=0;
        vector<int>v;
        int n=nums.size();
        vector<int>pre(n+1,0);
        for(i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        for(auto itr:nums){
            k=upper_bound(nums.begin(),nums.end(),itr)-nums.begin();
            //cout<<k<<" ";
            //m=accumulate(nums.begin(),nums.begin()+k,0);
            //cout<<m<<" ";
            l=k*itr;
            l-=pre[k];
            m=n-k;
            m*=itr;
            l+=((t-pre[k])-m);
            v.push_back(l);
        }
        return v;
    }
};