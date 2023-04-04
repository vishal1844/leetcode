class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int i,j,k,l,m,t=0,s=0;
        unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        for(i=0;i<nums.size();i++){
            s+=nums[i];
            if(s==0){
                t=max(t,i+1);
            }
            else{
                if(mp.find(s)!=mp.end()){
                    t=max(t,i-mp[s]);
                }
                else{
                    mp[s]=i;
                }
            }
        }
        return t;
    }
};