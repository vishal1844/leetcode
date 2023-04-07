class Solution {
    bool solve(vector<int>&nums,int mid,int maxOperations){
        int i,j,l,m,t=0;
        for(i=0;i<nums.size();i++){
            t+=((nums[i]-1)/mid);
        }
        return t<=maxOperations;
    }
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int i,j,k,m,t=INT_MAX;
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
        while(l<=h){
            int mid=(l+h)/2;
            if(solve(nums,mid,maxOperations)){
                t=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};