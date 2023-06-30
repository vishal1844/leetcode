#define ll long long 
#define mod 1000000007
class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<ll>v(1e5+1,0);
        map<ll,ll>mp;
        ll i,j,k,l,m,t=0;
        for(auto itr:requests){
            int k=itr[0];
            int l=itr[1];
            v[k]++;
            v[l+1]--;
        }
        t=0;
        priority_queue<ll>pq;
        for(i=0;i<n;i++){
            t+=v[i];
            pq.push(t);
        }
        t=0;
        i=n-1;
        while(!pq.empty()&&pq.top()!=0){
            k=pq.top();
            pq.pop();
            k=(k*nums[i--])%mod;
            t=(t%mod+k%mod)%mod;
        }
        return t;
    }
};