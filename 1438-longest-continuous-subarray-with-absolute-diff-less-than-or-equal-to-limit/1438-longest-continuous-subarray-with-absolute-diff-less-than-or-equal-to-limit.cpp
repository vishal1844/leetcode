class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        map<int,int>mp;
        int i,j,k,l,m,t=0;
        j=0;
        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
            auto itr=*mp.rbegin();
           // cout<<itr.first<<" ";
            auto it=*mp.begin();
            if(abs(itr.first-it.first)>limit){
                mp[nums[j]]--;
                if(mp[nums[j]]==0)mp.erase(nums[j]);
                j++;
            }
            //cout<<i<<" "<<j<<" ";
            t=max(t,i-j+1);
        }
        return t;
    }
};