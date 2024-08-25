class Solution {
    long long modpow(long long a, long long b, long long m) {long long  res = 1; while (b > 0) {if (b & 1)res = (res * a) % m; a = (a * a) % m; b = b >> 1;} return res;}
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        int mod = 1e9 + 7;
        // unordered_map<int,int>mp;
        int maxi=*max_element(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }
        if(mul==1)return nums;
        while (1) {
            auto itr = pq.top();
            long long p=(itr.first*mul);
            if(p>maxi)
                break;
            pq.pop();
            pq.push({(itr.first * mul)%mod, itr.second});
            k--;
            //mp[itr.second]++;
            if(k<=0)break;
        }
        int n=nums.size();
        long long pow=modpow(mul,k/n,mod);
        while (!pq.empty()) {
            auto itr = pq.top();
            pq.pop();
            nums[itr.second] = 1LL*((1LL*itr.first%mod)*(pow%mod))%mod;
            if(k%n!=0){
                k--;
                nums[itr.second]=1LL*((1LL*nums[itr.second]%mod)*(mul%mod))%mod;            
            }
        }
        return nums;
    }
};
