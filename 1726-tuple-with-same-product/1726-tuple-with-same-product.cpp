class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                k=nums[i]*nums[j];
                mp[k]++;
            }
        }
        for(auto itr:mp){
            k=itr.second;
            k=(k*(k-1))/2;
            t+=(k*8);
        }
        return t;
    }
};