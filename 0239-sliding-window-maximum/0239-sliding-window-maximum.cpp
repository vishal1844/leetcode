class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>v;
        int i,j,l,m,t=0;
        int n=nums.size();
        //multiset<int>st;
        map<int,int>mp;
        for(i=0;i<n;i++){
            if(i<k-1){
                //st.insert(nums[i]);
                mp[nums[i]]++;
                continue;
            }
            else{
                //st.insert(nums[i]);
                mp[nums[i]]++;
                auto itr=mp.rbegin();
                v.push_back(itr->first);
                mp[nums[i-k+1]]--;
                if(mp[nums[i-k+1]]==0){
                    mp.erase(nums[i-k+1]);
                }
            }
        }
        return v;
    }
};