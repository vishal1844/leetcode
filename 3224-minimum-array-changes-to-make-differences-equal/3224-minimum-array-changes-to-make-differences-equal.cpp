class Solution {
public:
    int minChanges(vector<int>& nums, int k) {
        int n=nums.size();
        int i,j,l,m,t=0;
        map<int,int>mp;
        for(i=0,j=n-1;i<n/2;i++,j--){
            l=abs(nums[i]-nums[j]);
            mp[l]++;
            t=max(t,mp[l]);
        }
        l=INT_MAX;
        vector<int>v;
        t=0;
        for(auto itr:mp){
            if(t<itr.second){
                t=itr.second;
                v.push_back(itr.first);
            }
        }
        for(int x=0;x<v.size();x++){
            int p=v[x];
            t=0;
            for(i=0,j=n-1;i<n/2;i++,j--){
                m=abs(nums[i]-nums[j]);
                if(m!=p){
                    if(abs(nums[i]-k)>=p||abs(nums[j]-k)>=p||nums[i]>=p||nums[j]>=p)t++;
                    else t+=2;
                }
            }
            l=min(l,t);
        }
        return l;
        
        
    }
};