class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int i,j,k,l,m,t=INT_MAX;
        //m=n-1;
        //sort(nums.begin(),nums.end());
        //map<int,int>mp;
        set<int>st(nums.begin(),nums.end());
        nums.clear();
        for(auto itr:st){
            nums.push_back(itr);
        }
        t=n;
        for(i=0;i<nums.size();i++){
            l=nums[i]+n-1;
            k=upper_bound(nums.begin(),nums.end(),l)-nums.begin();
            j=n-k+i;
            t=min(t,j);
        }
        return t;
    }
};