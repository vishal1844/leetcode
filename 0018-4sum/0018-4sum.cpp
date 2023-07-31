class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j,k,l,m,t=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>str;
        vector<vector<int>>ans;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                unordered_set<long long int>st;
                for(k=j+1;k<n;k++){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    long long p=target-sum;
                    if(st.count(p)){
                        vector<int>v{nums[i],nums[j],(int)p,nums[k]};
                        str.insert(v);
                    }
                    st.insert(nums[k]);
                }
            }
        }
        for(auto itr:str){
            ans.push_back(itr);
        }
        return ans;
    }
};