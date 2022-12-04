class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int j,k,l,m,t=0,s=0,mini=INT_MAX,p;
        int i;
        for(i=0;i<nums.size();i++){
            s+=nums[i];
        }
        int n=nums.size();
        for(i=0;i<nums.size();i++){
            t+=nums[i];
            l=t/(i+1);
            p=s-t;
            int r=n-1-i;
            if(r==0){
                k=0;
            }
            else{
            k=p/r;
            }
            j=abs(l-k);
            if(mini>j){
                mini=j;
                m=i;
            }
        }
        return m;
    }
};