class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        long long i,j,k,l,m,t=0;
        int n=nums.size();
        vector<string>v;
        for(auto itr:nums){
            v.push_back(to_string(itr));
        }
        for(i=0;i<10;i++){
            map<char,int>mp;
            for(j=0;j<n;j++){
                if(v[j].size()<i)break;
                mp[v[j][i]]++;
            }
            k=0;
            m=mp.size();
            for(auto itr:mp){
                l=itr.second;
                k+=l;
                j=l*(n-k);
                t+=j;
            }
        }
        return t;
    }
};