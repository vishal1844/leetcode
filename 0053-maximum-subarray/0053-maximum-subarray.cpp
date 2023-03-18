class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,j,k,l,m,t=0,maxi=INT_MIN;
        for(i=0;i<nums.size();i++){
            if(t==0){
                l=i;
            }
            t+=nums[i];
            if(t>maxi){
                k=l;
                m=i;
                maxi=t;
            }
            //maxi=max(maxi,t);
            if(t<0){
                t=0;
            }
        }
        for(i=k;i<=m;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        return maxi;
    }
};